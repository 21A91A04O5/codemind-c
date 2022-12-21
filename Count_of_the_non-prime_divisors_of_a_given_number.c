#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,f=0;
    if(n==1)
       return 0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
      return 1;
    else
      return 0;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && prime(i)==0)
           c+=1;
    }
    printf("%d",c);
    return 0;
}