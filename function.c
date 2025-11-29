#include<stdio.h>
void sum()
{
    int x,y,z;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    z=x+y;
    printf("sum %d\n",z);
}
void product()
{
    int x,y,z;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    z=x*y;
    printf("product %d\n",z);
}
void difference ()
{
    int x,y,z;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    z=x-y;
    printf("differnce %d\n",z);
}
int main()
{
    sum();
    product();
    difference();
    return 0 ;
}