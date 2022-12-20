#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=0;
    c=a+b;
    scanf("%d",&n);
    if(n==0 || n==1)
       printf("True");
    else
    {
      while(c<n)
      {
          c=a+b;
          a=b;
          b=c;
      }
      if(c==n)
         printf("True");
      else
         printf("False");
    }
    return 0;
}