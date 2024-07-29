extern void input_init(int, char *[]); 
extern void main_init(int, char *[]);
extern void type_init(int, char *[]);

void init(int argc, char *argv[]) {
    input_init(argc, argv);
    main_init(argc, argv);
    type_init(argc, argv);
}
