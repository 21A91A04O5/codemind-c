#include<stdio.h>
int pali(int n)
{
    int r,rev=0,temp;
    temp=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(temp==rev)
       return 1;
    else
       return 0;
}
int main()
{
    int n,i,j,a,b,c,d;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        if(pali(i))
        {
          a=i;
          break;
        }  
    }
    for(j=n+1;j<=99999;j++)
    {
        if(pali(j))
        {
            b=j;
            break;
        }
    }
    c=n-a;
    d=b-n;
    if(c>d)
       printf("%d",b);
    else if(c==d)
       printf("%d %d",a,b);
    else
       printf("%d",a);
    return 0;   
}