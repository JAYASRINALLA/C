#include<stdio.h>
#include<conio.h>
int fact(int);
int fact(int a)
{
    if(a==1)
        return 1;
    else
        return a*fact(a-1);
}
void main()
{
    int a;
    printf("enter any integer");
    scanf("%d",&a);
    printf("the factorial is %d",fact(a));
}