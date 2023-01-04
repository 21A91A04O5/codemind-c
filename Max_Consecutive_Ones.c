#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,maxi;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
           c+=1;
        else
        {
            maxi=(maxi>c)?maxi:c;
            c=0;
        }
    }
    maxi=(maxi>c)?maxi:c;
    printf("%d",maxi);
    return 0;
}