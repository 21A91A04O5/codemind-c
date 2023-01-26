#include<stdio.h>
#include<math.h>
int main()
{
    int n,e=0,o=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
           e=e+a[i];
        else
           o=o+a[i];
    }  
    if(abs(e-o)%4==0)
       printf("X");
    else
       printf("Y");
    return 0;   
}