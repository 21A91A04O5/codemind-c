#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,f=0;
    if(n==1)
      return 0;
    else
    {
      for(i=2;i<=(int)sqrt(n);i++)
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
}
int main()
{
    int n,r,v=0,c=0;
    scanf("%d",&n);
    if(prime(n))
    {
      while(n>0)
      {
        r=n%10;
        if(prime(r))
          v++;
        c++;
        n=n/10;
      }
      if(v==c)
       printf("Mega Prime");
      else
       printf("Not Mega Prime");
    }
    else
      printf("Not Mega Prime");
    return 0;   
}