#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int numLines;
    char line[100];
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Không th? t?o file!\n");
        return 1;
    }
    printf("Nh?p s? dòng: ");
    scanf("%d", &numLines);
    getchar();

    for (int i = 0; i < numLines; i++) {
        printf("Nh?p dòng %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Không th? m? file d? d?c!\n");
        return 1;
    }
    printf("\nN?i dung file bt05.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}

