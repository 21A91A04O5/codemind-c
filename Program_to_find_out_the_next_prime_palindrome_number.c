#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int c=0;
    for(int i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
      return 0;
    else
      return 1;
}
int pali(int n)
{
    int re=0,r;
    int temp=n;
    while(n>0)
    {
        r=n%10;
        re=re*10+r;
        n=n/10;
    }
    if(re==temp)
       return 1;
    else
       return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=10 && a<=10000)
    {
        for(int i=a+1;i<999999;i++)
        {
           if(pali(i) && prime(i))
           {
               printf("%d",i);
               break;
           }   
        }
    }
    return 0;
}