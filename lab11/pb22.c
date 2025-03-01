#include <stdio.h>

int main(int argc, char** argv) {
    FILE* dest = fopen(argv[1], "w");
    for (int i = 2; i < argc; i++) {
        FILE* src = fopen(argv[i], "r");
        char c = fgetc(src);
        while(c != EOF) {
            fputc(c, dest);
            c = fgetc(src);
        }
        fclose(src);
    }
    fclose(dest);
}