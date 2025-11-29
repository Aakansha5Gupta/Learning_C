#include<stdio.h>
int main()
{
    int i,p;
    p=1;
    int a[5]; //array declartion
    for(i=0;i<5;i++)
    {
        printf("enter element:");
        scanf("%d",&a[i]);
        p=p*a[i];
    }
    printf("product=%d",p);
    return 0;
}