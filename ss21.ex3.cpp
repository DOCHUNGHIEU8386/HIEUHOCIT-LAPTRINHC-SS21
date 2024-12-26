#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char input[100];

    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Không th? m? file!\n");
        return 1; 
    }
    printf("Nh?p m?t chu?i b?t k? d? ghi thêm: ");
    fgets(input, sizeof(input), stdin);
    fprintf(file, "%s", input);
    printf("Ðã ghi thêm chu?i vào file bt01.txt.\n");
    fclose(file);

    return 0;
}

