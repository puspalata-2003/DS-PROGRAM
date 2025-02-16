#include<stdio.h>
#include<conio.h>
void  main()
{
    int a,b,c;//20,30
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    c=a;//20
    a=b;//30
    b=c;//20
    printf("swap of two number a=%d & b=%d",a,b);
}