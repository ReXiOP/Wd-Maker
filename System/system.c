#include <stdio.h>

void pause() {
    fflush(stdin);
    fprintf(stdout, "Press enter to continue...");
    getc(stdin);
    fflush(stdin);
}

void clear() {
#ifdef _WIN64
    system("CLS");
#elif _WIN32
    system("CLS");
#elif __linux__
    system("clear");
#elif __unix__
    system("clear");
#endif
}
