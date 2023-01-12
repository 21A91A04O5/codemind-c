#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int a,b,i,k=0;
    scanf("%lld%lld",&a,&b);
    for(i=0;i<b;i++)
    {
        if(i*i%b==a)
        {
            printf("%lld
",i);
            k=1;
            break;
        }
    }
    if(k==0)
    {
        printf("-1
");
    }
    }
}