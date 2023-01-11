#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%d",&a);
       if(a==(int)sqrt(a)*(int)sqrt(a))
          printf("True
");
       else
          printf("False
");
    }   
    return 0;
}