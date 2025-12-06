#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50], s2[50];

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    if(strcmp(s1, s2) == 0)
        printf("Strings are equal");
    else if (s1<s2)
        printf("s1 is smaller than s2");    
    else
        printf("s2 is smaller than s1");
    return 0;
}
 