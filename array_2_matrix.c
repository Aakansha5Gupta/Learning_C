#include<stdio.h>
int main()
{
    int i,j,s;
    s=0;
    int matrix[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter element:");
            scanf("%d",&matrix[i][j]);
            s=s+matrix[i][j];
        }
    }
    printf("sum=%d\n",s);
    return 0;
}