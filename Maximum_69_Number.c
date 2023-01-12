#include<stdio.h>
int reverse(int n)
{
    int re=0,r;
    while(n!=0)
    {
        r=n%10;
        re=re*10+r;
        n=n/10;
    }
    return re;
}
int main()
{
    int n,c=0,r,a,rev=0;
    scanf("%d",&n);
    a=reverse(n);
    while(a!=0)
    {
        r=a%10;
        if(r==6 && c==0)
        {
          rev=(rev*10)+9;
          c++;
        }  
        else
        {
          rev=rev*10+r;
        }
        a=a/10;  
    }
    printf("%d",rev);
}