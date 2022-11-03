#include<stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=n;i>=1;i--)
        f=f*i;
    return f;    
}
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        printf("%d
",fact(n));
    }
    return 0;
}