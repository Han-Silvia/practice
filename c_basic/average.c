#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,num3;
    printf("Please enter the first integer¡G\n");
    scanf("%f",&num1);
    printf("Please enter the second integer¡G\n");
    scanf("%f",&num2);
    printf("Please enter the third integer¡G\n");
    scanf("%f",&num3);
    float average=(num1+num2+num3)/3;
    printf("The average is %f",average);
    return 0;
}
