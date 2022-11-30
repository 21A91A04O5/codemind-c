#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int f=0,i;
    for(i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0)
        {
            f=1;
            return 0;
            break;
        }
    }
    if(f==0)
       return 1;
    return 0;   
}
int main()
{
    int n,a,b,i,c=0;
    scanf("%d",&n);
    for(i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0 && prime(i))
        {
            c=1;
            a=i;
            break;
        }      
    }
    if(c==0)
       printf("-1");
    else
    {
      b=n/a;
      if(prime(b) && b!=a)
        printf("%d %d",a,b);
      else
        printf("-1");
    }    
}