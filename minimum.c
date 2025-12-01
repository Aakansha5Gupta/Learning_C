#include<stdio.h>
int main()
{
    int n,min,a;
    n=5;
    printf("enter first no.");
    scanf("%d",&min);
    for(int i=0;i<=5;i++)
    {
        printf("enter no.");
        scanf("%d",&a);
        if (min>a)
        min=a;
    }
    printf("minimum number.=%d",min);
    return 0;
}