#include <stdio.h>
#include <stdlib.h>
int input;
int output;
int main()
{
    printf("Please enter an uppercase letter¡G\n");
    scanf("%c",&input);
    output=input+32;
    printf("%c",output);
    return 0;
}
