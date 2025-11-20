#include<stdio.h>
int main()
{
int i,n,s;
s=0;i=0;
printf("enter the value of n:");
scanf("%d\n",&n);
while(i<n)
{
    i++;
    printf("%d",i);
    s=s+i;
}
printf("sum=%d",s);
return 0;
}