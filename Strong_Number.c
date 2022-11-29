#include<stdio.h>
int fact(int n)
{
    int a=1;
    for(int i=n;i>=2;i--)
        a=a*i;
    return a;    
}
int main()
{
    int n,r,f=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        f=f+fact(r);
        n=n/10;
    }
    if(f==temp)
        printf("The number %d is a strong number",temp);
    else
        printf("The number %d is not a strong number",temp);
    return 0;    
}