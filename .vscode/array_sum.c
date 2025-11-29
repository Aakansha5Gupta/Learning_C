#include<stdio.h>
int main()
{
    int i,s;
    s=0;
    int a[5] ; //array declartion
        for(i=0;i<5;i++)
    {    
        printf("enter element:");
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("sum=%d",s);
    return 0 ;
}