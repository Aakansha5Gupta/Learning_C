#include<stdio.h>
long int sum(int x);
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    printf("the sum of %d=%d",x,sum(x));
    return 0;
}
long int sum(int x)
{
    if(x>=1)
      return(x+sum(x-1));
    else
    return 0;
}
