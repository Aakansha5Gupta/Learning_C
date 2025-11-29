#include <stdio.h>
int main()
{
    int n,x,s,r,q;
    n=121;x=n;s=0;
    do
    {
      q=n/10;
      r=n%10;
      s=s*10+r;
      n=q;
    } 
    while (n!=0);
    if(x==s)
      printf("%d is palindrome");
    else 
      printf("%d is not palindrome");
      return 0 ;  
}