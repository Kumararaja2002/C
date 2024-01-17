#include<stdio.h>
int main()
{
     int n1,n2,gcd,min;
     scanf("%d %d",&n1,&n2);
     min=n1<n2?n1:n2;
     while(min>=2)
     {
          if((n1%min==0)&&(n2%min==0))
          {
             gcd=min;
             break;
          }
          min--;
     }
       printf("%d ",gcd);
     return 0;
}
