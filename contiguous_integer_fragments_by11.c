#include<stdio.h>
int nod(int n)
{
    int count =0;
    while(n>0)
    {
     int digits=n%10;
     n/=10;
     count++;
    }
return count;

}

int main()
{
    int n;
    scanf("%d",&n);
    int mod=1,i=1,rem=0,count=0;
    int dig=nod(n);
    while(i<=dig)
    {
       mod*=10;
       rem=n%mod;
       while(rem)
       {
          // printf("%d ",rem);
           if(rem%11==0)
           {
               count++;
               printf("\n%d ",rem);
           }
           rem/=10;

       }
       i++;

    }
    printf("\n%d ",count);

}
