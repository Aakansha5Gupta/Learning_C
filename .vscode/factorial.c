#include <stdio.h>
int main()
{
    int i,n ,p;
    i=0;p=1;
    printf("enter n:");
    scanf("%d",&n);
    do
    {
        i=i+1;
        printf("%d",i);
        p=p*i;
    } while (i<=n);
    printf("p=%d",p);
    return 0 ;
}