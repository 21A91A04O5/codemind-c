#include<stdio.h>
int main()
{
    int n,i,j=1,a[100],gcd;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    gcd=a[0];
    while(j<n)
    {
        if(a[j]%gcd==0)
           j++;
        else
           gcd=gcd-1;
    }
    printf("%d",gcd);
    return 0;
}