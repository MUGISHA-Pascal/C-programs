#include<stdio.h>

struct _COMPLEX{
    int first;
    int seco nd;
    int third;
}complex1;
int main(){
    struct _COMPLEX complex1;
    int value1;
    int value2;
    printf("enter the first number : ");
    scanf("%d",&value1);
    complex1.first=value1;
     printf("enter the second number : ");
    scanf("%d",&value2);
    complex1.first=value2;
    complex1.third=value1+value2;
    printf("the value of the sum is : %d ",complex1.third);
    return 0;
}