#include <stdio.h>

int main() 
{
    int a;
    float b;
    char c[20];
    FILE *fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open file\n");
        return 1;
    }
    fscanf(fp, "%d", &a);
    fscanf(fp, "%f", &b);
    fscanf(fp, "%s", c);
    fclose(fp);
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %s\n", c);
    return 0;
   
}
