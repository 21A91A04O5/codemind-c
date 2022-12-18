#include<stdio.h>
int main()
{
    int a[100],b[100],n,m,q,i,j,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    scanf("%d",&m);
    for(j=0;j<m;j++)
      scanf("%d",&b[j]);
    scanf("%d",&q);
    for(k=0;k<n;k++)
    {
        if(a[k]<=q && q<=b[k])
           c+=1;
    }
    printf("%d",c);
    return 0;
}