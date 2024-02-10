#include <stdio.h>

int main()
 {
   
    int min;
    float hr,sec;

    printf("Enter the number of minutes: ");
    scanf("%d", &min);

    sec = min * 60;
    hr = min/ 60.0;

    printf("Equivalent seconds: %.2f\n", sec);
    printf("Equivalent hours: %.2f\n", hr);

    return 0;
}
