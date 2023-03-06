#include <stdio.h>

int main() {
    int a;
    float b;
    char c[20];
    FILE *fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error: Cannot open file\n");
        return 1;
    }
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a float: ");
    scanf("%f", &b);
    printf("Enter a string: ");
    scanf("%s", c);
    fprintf(fp, "%d %.2f %s\n", a, b, c);
    fclose(fp);
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open file\n");
        return 1;
    }
    while (fscanf(fp, "%d %f %s", &a, &b, c) == 3) {
        printf("a = %d\n", a);
        printf("b = %.2f\n", b);
        printf("c = %s\n", c);
    }
    fclose(fp);
    return 0;
}
