#include<stdio.h>
int main()
{
    int a,b,n,i,c;
    a=0;
    b=1;
    printf("%d %d ",a,b);
    scanf("%d",&n);
    for(i=1;i<n-1;i++)
    {
         c=a+b;
         printf("%d ",c);
         a=b;
         b=c;
    }
    return 0;
}