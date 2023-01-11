#include<stdio.h>
int main()
{
    int n,s,i,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    scanf("%d",&s);   
    for(i=0;i<n;i++)   
    {
        if(max<a[i])
           max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+s>=max)
           printf("True ");
        else
           printf("False ");
    }
    return 0;
}