#include<stdio.h>
int main()
{
    int n=10;
    int c=0;
    int f1,f2,f3;
    f1=0;f2=1;
    do
    {
       printf("%d\n",f2);
       f3=f1+f2;
       f1=f2;
       f2=f3;
       c=c+1;
    } 
    while (c<n);
    return 0;
}