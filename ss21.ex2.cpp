#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char firstChar;
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Kh�ng th? m? file!\n");
        return 1; 
    }
    firstChar = fgetc(file);
    if (firstChar == EOF) {
        printf("File r?ng.\n");
    } else {
        printf("K� t? d?u ti�n trong file: %c\n", firstChar);
    }
    fclose(file);

    return 0;
}

