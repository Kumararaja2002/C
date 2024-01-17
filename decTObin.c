#include<stdio.h>
int main()
{
 int n,rem,bin=1;
 scanf("%d",&n);
 while(n>1)
 {
     rem=n%2;
     bin=bin*10+rem;
     n/=2;
 }
 printf("%d",bin);
}
