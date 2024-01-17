#include<stdio.h>
int main()
{
     int n,rem,bin=1;
     scanf("%d",&n);
     while(n>1)
     {
          rem=n%10;
          bin=bin*2+rem;
          n/=10;
     }
     printf("%d",bin);

}
