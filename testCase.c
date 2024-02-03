#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    FILE *dotool = popen("dotool", "w");
    if (dotool == NULL) {
        perror("Error opening dotool subprocess");
        return EXIT_FAILURE;
    }

    while (1) {
        usleep(500000);  // Подождать 0.5 секунды
        fprintf(dotool, "mouseto 0.51 0.51\n");
        //fflush(dotool);
        fprintf(dotool, "mouseto 0.5 0.5\n");
        //fflush(dotool);
    }

    pclose(dotool);
    return EXIT_SUCCESS;
}
