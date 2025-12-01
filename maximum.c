#include<stdio.h>
int main()
{
    int n,max,a;
    n=5;
    for (int i=1;i<=n;i++)
    {
        printf("enter no.");
        scanf("%d",&a);
        max=0;
        if(max<a)
        max=a;
    }
    printf("maximum number=%d",max);
    return 0;
 