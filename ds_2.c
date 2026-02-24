#include <stdio.h>
int main()
{
    int n,i;
    printf("enter no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("even");
        }
        else
            printf("odd");
    }
    printf("%d",i);
    return 0;
}
