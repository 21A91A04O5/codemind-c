#include<stdio.h>
int main()
{
    int i,n,a[100],c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
           c++;
        else
           d++;
    }
    for(i=0;i<c;i++)
        printf("0 ");
    for(i=c;i<n;i++)
        printf("1 ");
    return 0;    
}