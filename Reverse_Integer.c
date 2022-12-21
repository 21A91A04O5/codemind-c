#include<stdio.h>
int rev(int n)
{
    int re=0,r;
    while(n>0)
    {
        r=n%10;
        re=re*10+r;
        n=n/10;
    }
    return re;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0)
       printf("%d",rev(n));
    else
    {
        n=n*(-1);
       printf("-%d",rev(n));
    }   
    return 0;   
}