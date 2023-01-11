#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;    
    label:
          sum=sum+a[i];
          i++;
    if(i<n)
    {
        goto label;
    }   
    printf("%d",sum);
    return 0;   
}