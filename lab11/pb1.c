#include <stdio.h>

int main() {
    FILE* fp = fopen("myfile.txt", "r");
    if (fp == NULL) {
        printf("error");
        return 1;
    }
    char s[1001];
    while (fgets(s, 1000, fp)) {
        printf("%s", s);
    }
    fclose(fp);
    return 0;
}