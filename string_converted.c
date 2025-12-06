#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int n =86;
    sprintf(str, "%d",n);
    strupr(str);
    printf("the integer%d converted to string %s",n,str);
    return 0;
}