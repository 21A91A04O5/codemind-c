#include<stdio.h>
int main()
{
    int n,a[100],b,c,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        b=a[i];
        for(j=0;j<n;j++)
        {
            if(a[j]<b)
               c+=1;
        }
        printf("%d ",c);
    }
    return 0;
}