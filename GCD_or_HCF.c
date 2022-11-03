#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a>b)
       c=b;
    else   
       c=a;
    while(1) 
    {
      if(a%c==0 && b%c==0)
      {
        printf("%d",c);
        break;
      }    
      else
        c--;
    } 
    return 0;
}