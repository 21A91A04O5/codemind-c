#include<stdio.h>
#include<math.h>
int prime(int num)
{
    int k,fa=0;
    for(k=2;k<=(int)sqrt(num);k++)
    {
        if(num%k==0)
        {
           fa=1;
           break;
        }   
    }
    if(fa==0)
       return 1;
    else
       return 0;
}
int main()
{
    int n,i,j,a,b;
    scanf("%d",&n);
    if(prime(n)==1)
       printf("0");
    else
    {
      for(i=n-1;i>=2;i--)
      {
        if(prime(i))
        {
           a=i;
           break;
        }   
      }
      j=n+1;
      while(1)
      {
        if(prime(j))
        {
           b=j;
           break;
        }
        else
          j++;
      }
      if(abs(n-a)>abs(n-b))
         printf("%d",abs(n-b));
      else
         printf("%d",abs(n-a));
    }
    return 0;
}