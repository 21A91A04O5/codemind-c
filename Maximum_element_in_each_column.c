#include<stdio.h>
int main()
{
    int m,n,max,i,j;
    scanf("%d%d",&m,&n);
    int a[m][n],b[n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        max=0;
        for(j=0;j<n;j++)
        {
            if(a[j][i]>max)
               max=a[j][i];
        }
        b[i]=max;
    }
    for(i=0;i<n;i++)
       printf("%d
",b[i]);
    return 0;   
}