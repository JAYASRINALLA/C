#include <stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,res;
    printf("enter any two numbers");
    scanf("%d %d",&a,&b);
    res=sum(a,b);
    pintf("\n the res is %d",res);
    return 0;
}
  int sum(int a,int b)
  {
      return a+b;
  }
