#include <stdio.h>

int main()
 {
    int ang1, ang2, ang3;

    
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &ang1, &ang2, &ang3);

  
    if (ang1 + ang2 + ang3 == 180 && ang1 > 0 && ang2 > 0 && ang3 > 0) 
	{
        printf("The given angles can form a triangle.\n");
    } else {
        printf("The given angles cannot form a triangle.\n");
    }

    return 0;
}
