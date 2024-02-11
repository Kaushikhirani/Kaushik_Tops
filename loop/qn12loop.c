#include <stdio.h>
#include<math.h>

int main()
 {
    int num, orgnum, remainder, result = 0, n = 0;


    printf("Enter a number: ");
    scanf("%d", &num);

    orgnum = num;

    
    while (orgnum!= 0)
	 {
        orgnum /= 10;
        ++n;
    }

    orgnum = num;

  
    while (orgnum!= 0)
	 {
        remainder = orgnum % 10;
        result += pow(remainder, n);
        orgnum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
