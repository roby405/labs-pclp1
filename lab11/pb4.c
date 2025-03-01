#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv) {
    FILE* table = fopen(argv[1], "r");
    FILE* src = fopen(argv[2], "r");
    FILE* dest = fopen(argv[3], "w");

    char dec[27] = {0};
    char cod[27] = {0};
    char temp[1000];
    int index = 0;
    while(fgets(temp, 100, table)) {
        dec[index] = temp[0];
        cod[index] = temp[2];
        index++;
    }
    dec[index] = '\0';
    cod[index] = '\0';
    char c = fgetc(src);
    while (c != EOF) {
        for (int i = 0; i < index; i++) {
            if (tolower(c) == dec[i]) {
                c += cod[i] - dec[i];
                break;
            }
        }
        fputc(c, dest);
        c = fgetc(src);
    }
    fclose(table);
    fclose(src);
    fclose(dest);
}