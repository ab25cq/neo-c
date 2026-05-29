#include "minux.h"

long minux_write(int fd, const void* buf, size_t len)
{
    return write(fd, buf, len);
}

long minux_read(int fd, void* buf, size_t len)
{
    return read(fd, buf, len);
}

int minux_open(const char* path, int flags, int mode)
{
    return open(path, flags, mode);
}

int minux_close(int fd)
{
    return close(fd);
}

int minux_chdir(const char* path)
{
    return chdir(path);
}

int minux_tcsetpgrp(int fildes, int pgid)
{
    return tcsetpgrp(fildes, pgid);
}

void minux_exit(int status)
{
    _exit(status);
}

int minux_execv(const char* path, char** argv)
{
    return execv(path, argv);
}

int minux_execve(const char* path, char* argv[], char* envp[])
{
    return execve(path, argv, envp);
}

int minux_execved(const char* path, char* argv[], char* envp[])
{
    return execved(path, argv, envp);
}

int minux_wait(int* status_ptr)
{
    return wait(status_ptr);
}

int minux_dup2(int oldfd, int newfd)
{
    return dup2(oldfd, newfd);
}

int minux_pipe(int* fds)
{
    return pipe(fds);
}

int minux_fork(void)
{
    return fork();
}

int minux_getpid(void)
{
    return getpid();
}

int minux_opendir(const char* path)
{
    return opendir(path);
}

int minux_readdir(int fd, struct dirent* dirents_ptr, int max_entries)
{
    return readdir(fd, dirents_ptr, max_entries);
}

int minux_closedir(int fd)
{
    return closedir(fd);
}

int minux_getcwd_user(char* buf, int size)
{
    return getcwd_user(buf, size);
}

int minux_mkdir(const char* path, int mode)
{
    return mkdir(path, mode);
}

int minux_rmdir(const char* path)
{
    return rmdir(path);
}

int minux_stat(const char* path, struct stat* stptr)
{
    return stat(path, stptr);
}

int minux_utimes(const char* path, unsigned int atime, unsigned int mtime)
{
    return utimes(path, atime, mtime);
}
