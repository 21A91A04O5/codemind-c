#include<stdio.h>
int self(int n)
{
    int r,c=0,d=0,temp;
    temp=n;
    while(n>0)
    {
        r=n%10;
        if(r!=0 && temp%r==0)
           c+=1;
        d+=1;
        n=n/10;
    }
    if(c==d)
      return 1;
    else
      return 0;
}
int main()
{
    int n,m,i;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        if(self(i))
           printf("%d ",i);
    }
    return 0;
}