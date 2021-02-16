#include <curses.h>
#include <stdlib.h>
#include <dirent.h>
#include <curses.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    initscr();

    clear();
    printw("%ls", "いいいいいいいいいい");
    refresh();

    getch();

    endwin();

    exit(0);
}
