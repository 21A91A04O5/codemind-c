#include<stdio.h>
int reverse(int n)
{
    int rev=0,r;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n,a,rev,s,r;
    scanf("%d",&n);
    a=n*n;
    rev=reverse(n);
    s=rev*rev;
    if(a==reverse(s))
        printf("True");
    else
        printf("False");
    return 0;    
}