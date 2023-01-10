#include<stdio.h>
int main()
{
    int n,k,i,j,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
         scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
               c+=1;
        }
        if(c==2)
        {
            printf("%d",a[i]);
            break;
        }
        c=0;
    }
    return 0;
}