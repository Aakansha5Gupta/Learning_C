#include<stdio.h>
int main()
{
    int i,j,s;
    s=0;
    int matrix[2][3]={{1,4,2},{3,6,8}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\n",matrix[i][j]);
            s=s+matrix[i][j];
        }
    }
    printf("%d\n",s);
    return 0 ;
}