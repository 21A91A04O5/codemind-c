#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d%d",&n,&a);
    d=(int)log10(n)+1;
    b=n%((int)pow(10,a));
    c=(int)(n/((int)pow(10,d-a)));
    if(b>c)
       printf("%d",b-c);
    else
       printf("%d",c-b);
    return 0;   
}