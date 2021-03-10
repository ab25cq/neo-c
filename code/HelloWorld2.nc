#include <neo-c.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>

int main()
{
    puts("Hello World");
    printf("YEAH HOOOOOOOOOOOO C-WORLD comes here!!!! %s\n", "OK");

    int a = 1 + 1;

    printf("1 + 1 == %d\n", a);

    initscr();
    clear();
    mvprintw(2, 2, "aaa\n");
    refresh();

//    int key = getch();

    endwin();

    return 0;
}

