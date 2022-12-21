#include<stdio.h>
#include<math.h>
int count_divisors(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
           c+=1;
    }
    return c;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(count_divisors(i)==9)
        {
           printf("%d ",i);
           c+=1;
        }   
    }
    printf("
");
    printf("Total=%d",c);
    return 0;
}