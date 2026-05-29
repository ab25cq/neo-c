// mkfs.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>

//──────────────────────────────────────────
// Filesystem constants/structures (keep in sync with fs.h)
//──────────────────────────────────────────
#define BSIZE       512     // Block size (bytes)
//#define NINODES     64      // Number of inodes (expand to fit file count)
//#define NBLOCKS     256     // Total block count (example value)
#define NINODES     128     // Leave some headroom
#define NBLOCKS     4096*2*2*2*2    // 512B×4096 ≈ 2MiB FS image

// Inodes per block
#define IPB         (BSIZE / sizeof(struct dinode))
// Block number that stores i-node number inum
//   IBLOCK(1) = (1-1)/IPB + 2 = 2 so the root i-node (inum=1) lives at block 2
#define IBLOCK(i)   (( (i) - 1 ) / IPB + 2)

// Number of data blocks covered by one bitmap block
#define BPB         (BSIZE * 8)
// Bitmap block number that holds the bit for data block b
//   BBLOCK(b) = b/BPB + 2 + inodeblocks
//   Here inodeblocks = (NINODES + IPB - 1)/IPB
#define BBLOCK(b)   ( (b) / BPB + 2 + ((NINODES + IPB - 1) / IPB) )

#define NDIRECT     12
#define NINDIRECT   (BSIZE / sizeof(uint32_t))  // 512/4 = 128
// Maximum file blocks including double indirect
#define MAXFILE     (NDIRECT + NINDIRECT + NINDIRECT * NINDIRECT)
#define MAXFILESIZE (MAXFILE * BSIZE)

#define ROOTINO     1       // Root directory inode number
#define T_DIR       1       // Directory type
#define T_FILE      2       // Regular file type

#define DIRSIZ      14      // Maximum directory entry name length
#define DIR_MAX_BLOCKS 2    // Allow directories to span this many blocks when building

// ──────────────────────────────────────────
// On-disk i-node structure (extended for double indirect)
// ──────────────────────────────────────────
struct dinode {
    uint16_t type;                // T_DIR=1 or T_FILE=2, 0 = unused
    uint16_t major;               // 0 if unused
    uint16_t minor;               // 0 if unused
    uint16_t nlink;               // Link count
    uint32_t size;                // File size (bytes)
    uint32_t mode;                // Permissions
    uint16_t uid;                 // Owner
    uint16_t gid;                 // Group
    uint32_t atime;               // Last access
    uint32_t mtime;               // Modification time
    uint32_t ctime;               // Creation/modification time
    // [0..NDIRECT-1]: direct blocks (12)
    // [NDIRECT]     : pointer to single indirect block
    // [NDIRECT+1]   : pointer to double indirect block
    uint32_t addrs[NDIRECT + 2];
};

// ──────────────────────────────────────────
// Superblock structure (placed at block number 1)
// ─────────────────────────────────────────
struct superblock {
    uint32_t size;       // Total number of filesystem blocks (NBLOCKS)
    uint32_t nblocks;    // Number of data blocks
    uint32_t ninodes;    // Number of i-nodes
    uint32_t nlog;       // Number of log blocks (unused here = 0)
    uint32_t logstart;   // Starting block of log area (unused = 0)
    uint32_t inodestart; // Starting block of i-node area (= 2)
    uint32_t bmapstart;  // Starting block of bitmap
};

// ──────────────────────────────────────────
// Directory entry (packed every DIRSIZ within a block)
// ──────────────────────────────────────────
struct dirent {
    uint16_t inum;              // File i-node number
    char     name[DIRSIZ];      // File/directory name (fixed 14 bytes, no NUL terminator)
};

// ──────────────────────────────────────────────────────────
// Global variables: hold the entire disk image in memory
// ──────────────────────────────────────────────────────────
static unsigned char img[NBLOCKS * BSIZE]; // Entire FS image as bytes
static uint8_t       freemap[NBLOCKS];     // Block usage (0=free, 1=used)

// ──────────────────────────────────────────────────────────
// Function prototypes
// ──────────────────────────────────────────────────────────

// Allocate a data block and return its block number (grab a free block)
uint32_t alloc_data_block(void);

// Write a block
//   blkno: block number (0 to NBLOCKS-1)
//   buf:   data to write (BSIZE bytes)
void write_block(uint32_t blkno, void *buf);

// Write an inode to disk
//   inum: inode number (1 to NINODES)
//   ip:   inode structure to write
void write_inode(uint32_t inum, struct dinode *ip);

// Add a directory entry to a parent directory
//   parent_inum: inode number of the parent directory
//   name:        filename to add (NUL-terminated, length < DIRSIZ)
//   file_inum:   inode number of the child to link
void dirlink(uint32_t parent_inum, const char *name, uint32_t file_inum);

// ──────────────────────────────────────────────────────────
// Internal helper function prototypes
// ──────────────────────────────────────────────────────────
static void  write_superblock(void);
static int   read_inode(uint32_t inum, struct dinode *ip);
static void  read_block(uint32_t blkno, void *buf);
static void  set_bitmap(uint32_t blkno);
static int   bitmap_is_allocated(uint32_t blkno);

// ──────────────────────────────────────────────────────────
// Implementations: alloc_data_block / write_block / write_inode / dirlink
// ──────────────────────────────────────────────────────────

//-------------------------------------------------------------
// alloc_data_block:
//   Find one unused data block in the FS, mark it used,
//   and return that block number.
//   Exclude reserved regions (superblock=1, inode area, bitmap area)
//   and search only the user-data area within NBLOCKS.
//-------------------------------------------------------------
uint32_t
alloc_data_block(void)
{
    // Assume the superblock lives at block 1; block 0 is unused.
    // The inode area starts at block 2 and occupies (NINODES/IPB) blocks.
    uint32_t inodestart = 2;
    uint32_t inodeblocks = (NINODES + IPB - 1) / IPB;
    uint32_t bmapstart = inodestart + inodeblocks;
    uint32_t bmapblocks = (NBLOCKS + BPB - 1) / BPB;
    uint32_t datastart = bmapstart + bmapblocks;

    for (uint32_t b = datastart; b < NBLOCKS; b++) {
        if (!bitmap_is_allocated(b)) {
            set_bitmap(b);
            return b;
        }
    }

    fprintf(stderr, "alloc_data_block: 空きデータブロックがありません\n");
    exit(1);
}

//-------------------------------------------------------------
// write_block:
//   Write block number blkno (0..NBLOCKS-1) into img[].
//   Copy BSIZE bytes starting at the head of buf.
//-------------------------------------------------------------
void
write_block(uint32_t blkno, void *buf)
{
    if (blkno >= NBLOCKS) {
        fprintf(stderr, "write_block: blkno=%u が範囲外 (0..%d)\n", blkno, NBLOCKS-1);
        exit(1);
    }
    memcpy(img + blkno * BSIZE, buf, BSIZE);
}

//-------------------------------------------------------------
// write_inode:
//   Write inode information ip for inode number inum
//   into the inode area on disk.
//   The inode area is contiguous from block 2 onward,
//   e.g., valid for inum=1..NINODES.
//-------------------------------------------------------------
void
write_inode(uint32_t inum, struct dinode *ip)
{
    if (inum < 1 || inum > NINODES) {
        fprintf(stderr, "write_inode: inum=%u が範囲外 (1..%d)\n", inum, NINODES);
        exit(1);
    }
    // Starting block number of the inode blocks
    uint32_t inodestart = 2;
    uint32_t block = IBLOCK(inum);
    uint32_t offset = ((inum - 1) % IPB) * sizeof(struct dinode);

    unsigned char buf[BSIZE];
    // Read existing block contents first
    read_block(block, buf);
    struct dinode *dip = (struct dinode *)(buf + offset);
    *dip = *ip;
    write_block(block, buf);
}

//-------------------------------------------------------------
// dirlink:
//   Link a new child file/directory with inode file_inum
//   into parent directory parent_inum under the given name.
//   Simplified: allow the first DIR_MAX_BLOCKS direct blocks for entries.
//-------------------------------------------------------------
void
dirlink(uint32_t parent_inum, const char *name, uint32_t file_inum)
{
    if (parent_inum < 1 || parent_inum > NINODES ||
        file_inum   < 1 || file_inum   > NINODES) {
        fprintf(stderr, "dirlink: inum=%u または %u が範囲外\n", parent_inum, file_inum);
        exit(1);
    }

    // First read the parent directory's i-node
    struct dinode parent_ip;
    if (read_inode(parent_inum, &parent_ip) < 0) {
        fprintf(stderr, "dirlink: 親イノード %u を読めません\n", parent_inum);
        exit(1);
    }
    if (parent_ip.type != T_DIR) {
        fprintf(stderr, "dirlink: inum=%u はディレクトリではありません\n", parent_inum);
        exit(1);
    }

    for (int blk_idx = 0; blk_idx < DIR_MAX_BLOCKS; blk_idx++) {
        if (parent_ip.addrs[blk_idx] == 0) {
            uint32_t b = alloc_data_block();
            parent_ip.addrs[blk_idx] = b;
            unsigned char z[BSIZE]; memset(z, 0, BSIZE);
            write_block(b, z);
            uint32_t block_end = (uint32_t)(blk_idx + 1) * BSIZE;
            if (parent_ip.size < block_end) parent_ip.size = block_end;
            write_inode(parent_inum, &parent_ip);
        }

        // Read the contents of this block and look for a free entry
        unsigned char buf[BSIZE];
        read_block(parent_ip.addrs[blk_idx], buf);
        struct dirent *de = (struct dirent *)buf;
        int entries = BSIZE / sizeof(struct dirent);

        for (int i = 0; i < entries; i++) {
            if (de[i].inum == 0) {
                de[i].inum = file_inum;
                for (int k = 0; k < DIRSIZ; k++) de[i].name[k] = 0;
                strncpy(de[i].name, name, DIRSIZ);
                write_block(parent_ip.addrs[blk_idx], buf);
                uint32_t block_end = (uint32_t)(blk_idx + 1) * BSIZE;
                if (parent_ip.size < block_end) parent_ip.size = block_end;
                write_inode(parent_inum, &parent_ip);
                return;
            }
        }
    }

    fprintf(stderr, "dirlink: 親ディレクトリに空きエントリがありません (最大 %d バイト)\n",
            DIR_MAX_BLOCKS * BSIZE);
    exit(1);
}

// ────────────────────────────────────────────────────────────────
// 6. Helper function implementations
// ────────────────────────────────────────────────────────────────

//-------------------------------------------------------------
// write_superblock:
//   Write the superblock to block 1.
//   Populate metadata (size, nblocks, ninodes, inodestart, bmapstart, ...).
//-------------------------------------------------------------
static void
write_superblock(void)
{
    struct superblock sb;
    uint32_t inodeblocks = (NINODES + IPB - 1) / IPB;
    uint32_t bmapblocks = (NBLOCKS + BPB - 1) / BPB;

    sb.size       = NBLOCKS;
    sb.nblocks    = NBLOCKS - (2 + inodeblocks + bmapblocks);
    sb.ninodes    = NINODES;
    sb.nlog       = 0;        // Log area not used
    sb.logstart   = 0;
    sb.inodestart = 2;        // i-node area starts at block 2
    sb.bmapstart  = 2 + inodeblocks;

    unsigned char buf[BSIZE];
    memset(buf, 0, BSIZE);
    memcpy(buf, &sb, sizeof(sb));
    write_block(1, buf);
}

//-------------------------------------------------------------
// read_block:
//   Copy block number blkno into buf[0..BSIZE-1].
//   Simply memcpy from img[].
//-------------------------------------------------------------
static void
read_block(uint32_t blkno, void *buf)
{
    if (blkno >= NBLOCKS) {
        fprintf(stderr, "read_block: blkno=%u が範囲外\n", blkno);
        exit(1);
    }
    memcpy(buf, img + blkno * BSIZE, BSIZE);
}

//-------------------------------------------------------------
// read_inode:
//   Load i-node number inum into *ip.
//   The i-node area stores IPB entries per block from block 2 onward.
//   Returns 0 on success, -1 on failure (e.g., out of range).
//-------------------------------------------------------------
static int
read_inode(uint32_t inum, struct dinode *ip)
{
    if (inum < 1 || inum > NINODES) return -1;
    uint32_t block = IBLOCK(inum);
    unsigned char buf[BSIZE];
    read_block(block, buf);
    struct dinode *dip = (struct dinode *)buf + ((inum - 1) % IPB);
    *ip = *dip;
    return 0;
}

//-------------------------------------------------------------
// set_bitmap:
//   Mark block blkno as "used" in the bitmap.
//   The bitmap lives inside img[]; set the relevant bit in block BBLOCK(blkno).
//-------------------------------------------------------------
static void
set_bitmap(uint32_t blkno)
{
    uint32_t inodestart = 2;
    uint32_t inodeblocks = (NINODES + IPB - 1) / IPB;
    uint32_t bmapstart = inodestart + inodeblocks;

    uint32_t bmapblock = BBLOCK(blkno);
    unsigned char buf[BSIZE];
    read_block(bmapblock, buf);

    uint32_t bi = blkno % BPB;      // Offset within bitmap (0..BPB-1)
    uint32_t byte_index = bi / 8;
    uint32_t bit_offset = bi % 8;
    buf[byte_index] |= (1 << bit_offset);

    write_block(bmapblock, buf);
    freemap[blkno] = 1;
}

//-------------------------------------------------------------
// bitmap_is_allocated:
//   Consult the bitmap to see whether blkno is already allocated.
//   1: in use, 0: free.
//-------------------------------------------------------------
static int
bitmap_is_allocated(uint32_t blkno)
{
    uint32_t inodestart = 2;
    uint32_t inodeblocks = (NINODES + IPB - 1) / IPB;
    uint32_t bmapstart = inodestart + inodeblocks;

    uint32_t bmapblock = BBLOCK(blkno);
    unsigned char buf[BSIZE];
    read_block(bmapblock, buf);

    uint32_t bi = blkno % BPB;
    uint32_t byte_index = bi / 8;
    uint32_t bit_offset = bi % 8;
    return (buf[byte_index] >> bit_offset) & 1;
}

// ────────────────────────────────────────────────────────────────────────
// 7. Example mkfs main flow
//    Embeds a binary supporting direct + single-indirect + double-indirect blocks
// ────────────────────────────────────────────────────────────────────────

void write_file_to_file_system(char* elfpath, uint32_t new_inum)
{
    struct stat st;
    if (stat(elfpath, &st) < 0) {
        perror(elfpath);
        exit(1);
    }
    size_t filesize = st.st_size;
    if (filesize > MAXFILESIZE) {
        fprintf(stderr, "b.txt が大きすぎます (上限 %d bytes)\n", MAXFILESIZE);
        exit(1);
    }

    // Create a file using inode number 2
    struct dinode file_ip;
    memset(&file_ip, 0, sizeof(file_ip));
    file_ip.type  = T_FILE;
    file_ip.nlink = 1;
    file_ip.size  = filesize;
    file_ip.mode  = 0755;
    file_ip.uid   = 0;
    file_ip.gid   = 0;
    file_ip.atime = (uint32_t)time(NULL);
    file_ip.mtime = (uint32_t)time(NULL);
    file_ip.ctime = file_ip.mtime;

    int fd = open(elfpath, O_RDONLY);
    if (fd < 0) {
        perror(elfpath);
        exit(1);
    }

    // ────────────────────────────────────────────────────────────
    // Prepare buffers
    // ────────────────────────────────────────────────────────────
    char buf[BSIZE];
    size_t remaining = filesize;
    int    di = 0;    // Number of blocks written (0-based block index)
    // Buffer for single indirect: holds NINDIRECT uint32_t entries
    uint32_t single_indirect_blk = 0;
    uint32_t single_buf[NINDIRECT];
    memset(single_buf, 0, sizeof(single_buf));
    // Buffer for double indirect: holds NINDIRECT uint32_t entries
    // Block number pointing to the first level of the double-indirect tree
    uint32_t double_indirect_blk = 0;
    // First-level array storing which single-indirect block each entry points to
    uint32_t double_buf[NINDIRECT];
    memset(double_buf, 0, sizeof(double_buf));
    // List of second-level arrays (allocate as needed and write back later)
    //  For example, if double_second_blocks[i] is nonzero, that block was
    //  allocated as the second-level block for first-level entry i.
    uint32_t *double_second_blocks = malloc(sizeof(uint32_t) * NINDIRECT);
    memset(double_second_blocks, 0, sizeof(uint32_t) * NINDIRECT);
    // Storage for second-level buffers: allocate one block at a time and write progressively
    uint32_t *second_buf[NINDIRECT];
    for (int i = 0; i < NINDIRECT; i++) {
        second_buf[i] = NULL;
    }

    // ────────────────────────────────────────────────────────────
    // Read the file data, allocate data blocks,
    // and populate addrs[] in the i-node
    // ────────────────────────────────────────────────────────────
    while (remaining > 0) {
        // 1) Allocate a new data block
        uint32_t b = alloc_data_block();
        ssize_t r = read(fd, buf, BSIZE);
        if (r < 0) {
            perror(elfpath);
            close(fd);
            exit(1);
        }
        // 2) Write data to the new block
        write_block(b, buf);

        // 3) Place it into the i-node's addrs[]
        if (di < NDIRECT) {
            // ─────────── Direct block region ───────────
            file_ip.addrs[di] = b;
        }
        else if (di < NDIRECT + NINDIRECT) {
            // ─────────── Single-indirect region ───────────
            int idx1 = di - NDIRECT;
            if (single_indirect_blk == 0) {
                // If the single-indirect block is not allocated yet, allocate and zero it
                single_indirect_blk = alloc_data_block();
                uint8_t z[BSIZE];
                memset(z, 0, BSIZE);
                write_block(single_indirect_blk, z);
            }
            single_buf[idx1] = b;
            // Write-back happens after the loop
        }
        else {
            // ─────────── Double-indirect region ───────────
            int di_idx = di - (NDIRECT + NINDIRECT);
            int idx1 = di_idx / NINDIRECT;  // First-level index within the double-indirect area
            int idx2 = di_idx % NINDIRECT;  // Second-level index within the double-indirect area

            if (double_indirect_blk == 0) {
                // If the double-indirect block is not allocated yet, allocate it
                double_indirect_blk = alloc_data_block();
                uint8_t z[BSIZE];
                memset(z, 0, BSIZE);
                write_block(double_indirect_blk, z);
            }
            // double_buf[idx1] holds the single-indirect block number for this idx1
            if (double_buf[idx1] == 0) {
                // First allocation of the single-indirect block for this idx1
                uint32_t new_first = alloc_data_block();
                double_buf[idx1] = new_first;
                // Zero it like the first-level block before writing
                second_buf[idx1] = malloc(BSIZE);
                memset(second_buf[idx1], 0, BSIZE);
                write_block(new_first, second_buf[idx1]);
            }
            // Allocate the second-level buffer if needed (reuse if it already exists)
            if (second_buf[idx1] == NULL) {
                second_buf[idx1] = malloc(BSIZE);
                memset(second_buf[idx1], 0, BSIZE);
                // Actual content should already be written to the block, so zero is fine here
            }
            // Update second_buf[idx1]
            uint32_t *entries = (uint32_t *)second_buf[idx1];
            entries[idx2] = b;

            // Keep second_buf[idx1] for the later write-back
            double_second_blocks[idx1] = double_buf[idx1];
        }

        di++;
        remaining -= r;
    }
    close(fd);

    // ────────────────────────────────────────────────────────────
    // Write back the single-indirect block if present
    // ────────────────────────────────────────────────────────────
    if (single_indirect_blk != 0) {
        write_block(single_indirect_blk, single_buf);
        file_ip.addrs[NDIRECT] = single_indirect_blk;
    }
    // ───────────────────────────────────────────────────────────
    // Write back the first-level double-indirect block if present
    // ※ double_buf holds the first-level block numbers to write back
    //    Also write each second_buf[i] to its corresponding block
    // ────────────────────────────────────────────────────────────
    if (double_indirect_blk != 0) {
        // 1) Write the first-level block itself using double_buf contents
        write_block(double_indirect_blk, double_buf);
        file_ip.addrs[NDIRECT + 1] = double_indirect_blk;

        // 2) Write each second_buf[i]
        for (int i = 0; i < NINDIRECT; i++) {
            if (double_buf[i] != 0 && second_buf[i] != NULL) {
                write_block(double_buf[i], second_buf[i]);
                free(second_buf[i]);
            }
        }
    }

    // 4) Write the i-node information to disk
    write_inode(new_inum, &file_ip);

    // 5) Link the file into the root directory
    dirlink(ROOTINO, elfpath, new_inum);
}

int
main(int argc, char *argv[])
{
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <output-image-file> [extra-files...]\n", argv[0]);
        exit(1);
    }

    // 1) First zero-clear img[]
    memset(img, 0, sizeof(img));
    memset(freemap, 0, sizeof(freemap));

    // 2) Write the superblock
    write_superblock();

    // 3) Initialize the root inode (inum = ROOTINO = 1) and place it on disk
    struct dinode root_ip;
    memset(&root_ip, 0, sizeof(root_ip));
    root_ip.type  = T_DIR;    // Directory
    root_ip.nlink = 1;
    root_ip.size  = 0;        // Will be set later if data blocks are allocated
    root_ip.mode  = 0755;
    root_ip.uid   = 0;
    root_ip.gid   = 0;
    root_ip.atime = (uint32_t)time(NULL);
    root_ip.mtime = (uint32_t)time(NULL);
    root_ip.ctime = root_ip.mtime;
    // addrs[] is already zero-initialized
    write_inode(ROOTINO, &root_ip);

    //-------------------------------------------------------------------
    // Example: embed files directly under the root as /hello.elf, etc.
    //-------------------------------------------------------------------
    write_file_to_file_system("cat", 3);
    write_file_to_file_system("grep", 4);
    write_file_to_file_system("echo", 5);
    write_file_to_file_system("ls", 6);
    write_file_to_file_system("pwd", 7);
    write_file_to_file_system("passwd", 8);
    write_file_to_file_system("group", 9);
    write_file_to_file_system("hexdump", 10);
    write_file_to_file_system("sh", 11);
    write_file_to_file_system("touch", 12);
    write_file_to_file_system("mkdir", 13);
    write_file_to_file_system("rmdir", 14);
    write_file_to_file_system("more", 15);
    write_file_to_file_system("cc", 16);
    write_file_to_file_system("nm", 17);
    write_file_to_file_system("vi", 18);
    write_file_to_file_system("as", 19);
    write_file_to_file_system("ld", 20);
    write_file_to_file_system("readelf", 21);
    write_file_to_file_system("objdump", 22);
    write_file_to_file_system("sleep", 23);
    write_file_to_file_system("uname", 24);
    write_file_to_file_system("cpp", 25);
    write_file_to_file_system("ld", 26);
    write_file_to_file_system("b.c", 27);
    write_file_to_file_system("c.c", 28);
    write_file_to_file_system("cpp", 29);
    write_file_to_file_system("minux9.o", 30);
    write_file_to_file_system("minux9.h", 31);
    write_file_to_file_system("a.c", 32);
    write_file_to_file_system("crt0.o", 33);
    write_file_to_file_system("stdarg.h", 34);
    write_file_to_file_system("user-minux9.ld", 35);
    write_file_to_file_system("pipeline", 36);
//    write_file_to_file_system("neo-c.h", 34);
//    write_file_to_file_system("neo-c", 35);

    uint32_t next_inum = 37;
    for (int i = 2; i < argc; i++) {
        write_file_to_file_system(argv[i], next_inum++);
    }

    // 5) Finally write the entire img[] out to the real file
    int outfd = open(argv[1], O_CREAT | O_RDWR, 0666);
    if (outfd < 0) {
        perror("open output image");
        exit(1);
    }
    if (write(outfd, img, sizeof(img)) != sizeof(img)) {
        perror("write image");
        exit(1);
    }
    close(outfd);

    printf("mkfs 完了: 出力ファイル '%s' (サイズ %zu bytes)\n",
           argv[1], sizeof(img));
    return 0;
}
