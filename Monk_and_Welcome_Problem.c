#include<stdio.h>
int main()
{
    int n,a[100],b[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        printf("%d ",a[i]+b[i]);
    return 0;    
}