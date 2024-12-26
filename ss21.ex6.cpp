#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("bt01.txt", "r");
    if (sourceFile == NULL) {
        printf("Kh�ng th? m? file bt01.txt d? d?c!\n");
        return 1;
    }
    destFile = fopen("bt06.txt", "w");
    if (destFile == NULL) {
        printf("Kh�ng th? t?o file bt06.txt d? ghi!\n");
        fclose(sourceFile); 
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    printf("�� sao ch�p n?i dung t? bt01.txt sang bt06.txt.\n");
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

