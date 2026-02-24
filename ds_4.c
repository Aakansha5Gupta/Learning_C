#include<stdio.h>
int main()
{
    int arr[100];
    printf("enter the elements of the array:");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("in the elements are:");
    for(int i=0;i<4;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}