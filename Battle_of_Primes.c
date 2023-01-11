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
    int a,b,i=1;
    scanf("%d",&a);
    scanf("%d",&b);
    while(1)
    {
        if(prime(a+b+i))
        {
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}