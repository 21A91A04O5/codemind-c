#include<stdio.h>
int main()
{
    int n,max=0,f,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       if(max<a[i])
          max=a[i];
    }   
    for(i=max;;i++)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(i%a[j]!=0)
            {
                f=1;
                break;
            }   
        }
        if(f==0)
        {
           printf("%d",i);
           break;
        }   
    }
    return 0;
}