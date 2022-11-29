#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    if(n==1)
        printf("-1");
    else
    {
      a=(int)n*(n-1)/2;
      printf("%d",a);
    }  
}