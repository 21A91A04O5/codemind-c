#include<stdio.h>
int pretty(int n)
{
    if(n%10==2 ||n%10==3 ||n%10==9)
        return 1;
    else
        return 0;
}
int main()
{
    int m,n,t,i,j,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        c=0;
        scanf("%d%d",&m,&n);
        for(j=m;j<=n;j++)
        {
            if(pretty(j))
               c+=1;
        }
        printf("%d
",c);
    }
    return 0;
}