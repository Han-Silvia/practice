#include <stdio.h>

int main(){
    int integer1; //1
    int integer2; //2
    int integer3; //3
    int a;
    int b;
    printf("Please enter the first integer.");
    scanf("%d",&integer1);
    printf("Please enter the second integer.");
    scanf("%d",&integer2);
    printf("Please enter the third integer.");
    scanf("%d",&integer3);

    a=integer1;
    integer1=integer2;
    integer2=integer3;
    integer3=a;

    printf("integer1 is¡G %d\n",integer1);
    printf("integer2 is¡G %d\n",integer2);
    printf("integer3 is¡G %d\n",integer3);
    return 0;
    }
