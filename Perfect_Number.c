//ignoring the number, the sum of factors is equal to the number
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    i=1;
    while(i<n)
    {
        if(n%i==0)
        sum=sum+i;
        i++;
    }
    if(sum==n)
        printf("True");
    else
        printf("False");
    return 0;
}