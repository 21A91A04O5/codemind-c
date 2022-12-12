#include<stdio.h>
int main()
{
    long long int x,y,v;
    scanf("%lld",&x);
    y=x/10;
    if(x%10!=0&&y<0)
    {
        v=y-1;
        if(v<y)
        {
        printf("%lld",v);
        }
        else
        {
            printf("%lld",y);
        }
    }
    else
    {
        printf("%lld",y);
    }
}