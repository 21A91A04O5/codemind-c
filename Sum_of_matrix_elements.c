#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}    