#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char firstChar;
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Không th? m? file!\n");
        return 1; 
    }
    firstChar = fgetc(file);
    if (firstChar == EOF) {
        printf("File r?ng.\n");
    } else {
        printf("Ký t? d?u tiên trong file: %c\n", firstChar);
    }
    fclose(file);

    return 0;
}

