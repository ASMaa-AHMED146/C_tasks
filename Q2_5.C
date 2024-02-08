#include <stdio.h>
#include <stdlib.h>

int main()
{float num1, num2, num3, max;


    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if ((num1 > num2) && (num1 > num3)) {

        max = num1;
    } else if ((num2 > num1) && (num2 > num3)) {

        max = num2;
    } else if ((num3 > num1) && (num3 > num2)) {

        max = num3;
    }


    printf("Maximum = %.3f", max);


    return 0;
}
