#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv) {
    int flags[3] = {0};
    for (int i = 1; i < argc - 2; i++) {
        if (strcmp(argv[i], "i") == 0)
            flags[0] = 1;
        else if (strcmp(argv[i], "c") == 0)
            flags[1] = 1;
        else if (strcmp(argv[i], "n") == 0)
            flags[2] = 1;
    }
    FILE* fp = fopen(argv[argc-2], "r");
    if (fp == NULL) {
        fprintf(stderr, "not good...");
        return 1;
    }
    char buffer[1001];
    int line = 1;
    int foundLines = 0;
    while (fgets(buffer, 1000, fp) != NULL) {
        int contains;
        if (flags[0]) {
            char copy[1001] = {0};
            char copy2[1001] = {0};
            for (int i = 0; i < strlen(buffer); i++) {
                copy[i] = tolower(buffer[i]);
            }
            for (int i = 0; i < strlen(argv[argc - 1]); i++) {
                copy2[i] = tolower(argv[argc - 1][i]);
            }
            contains = strstr(copy, copy2) != NULL;
        } else {
            contains = strstr(buffer, argv[argc-1]) != NULL;
        }
        if (contains) {
            foundLines++;
            if (flags[2])
                printf("%d ", line);
            printf("%s", buffer);
        }
        line++;
    }
    if (flags[1])
        printf("Found %d lines with the string\n", foundLines);
    fclose(fp);
}