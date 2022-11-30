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
    int n;
    scanf("%d",&n);
    if(prime(n))
       printf("prime");
    else
       printf("not a prime");
    return 0;
}