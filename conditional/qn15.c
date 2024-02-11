#include <stdio.h>

int main() {
    int phy, chem, maths, total_all, total_maths_physics;

    
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phy);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chem);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &maths);

    printf("Total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &total_all);

    printf("Total marks of Maths and Physics: ");
    scanf("%d", &total_maths_physics);

    
    if ((phy<= 65 && chem <= 55 && maths <= 50 && total_all >= 188) || total_maths_physics >= 137)
	 {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
