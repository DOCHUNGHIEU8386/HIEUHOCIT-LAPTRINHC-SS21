#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[100];
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Kh�ng th? m? file!\n");
        return 1; 
    }
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("D�ng d?u ti�n trong file: %s", line);
    } else {
        printf("File r?ng ho?c kh�ng c� n?i dung.\n");
    }
    fclose(file);
    return 0;
}

