#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    FILE* fp = fopen(argv[1], "r");
    if (fp == NULL) {
        fprintf(stderr, "not good...");
        return 1;
    }
    char buffer[1001];
    while (fgets(buffer, 1000, fp) != NULL) {
        if (strstr(buffer, argv[2]) != NULL)
            printf("%s", buffer);
    }
}