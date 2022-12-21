#include<stdio.h>
int pali(int n)
{
    int r,temp,rev=0;
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
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(pali(n))
           printf("True
");
        else
           printf("False
");
    }
    return 0;
}