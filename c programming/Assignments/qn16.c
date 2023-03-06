#include<stdio.h>

void main()
{
    int choice;
    float base, height, length, width, radius, area;

    printf("Menu:\n");
    printf("1. Area of Triangle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter base and height of the triangle: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of the triangle = %.2f\n", area);
    }
    else if(choice == 2)
    {
        printf("Enter length and width of the rectangle: ");
        scanf("%f %f", &length, &width);
        area = length * width;
        printf("Area of the rectangle = %.2f\n", area);
    }
    else if(choice == 3)
    {
        printf("Enter radius of the circle: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("Area of the circle = %.2f\n", area);
    }
    else
    {
        printf("Invalid choice\n");
    }

    
}