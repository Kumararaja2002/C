#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     for(int i=n;i>1;i--,printf("\n"))
     {
          for(int j=n;j>i;j--)
          {
               printf("%d ",j);
          }
          for(int j=0;j<i-2;j++)
          {
               printf("%d ",i);
          }
          for(int j=0;j<i;j++)
          {
               printf("%d ",i);
          }
          for(int j=i;j<n+1;j++)
          {
               printf("%d ",j);
          }
     }
     for(int i=1;i<=n;i++,printf("\n"))
     {
          for(int j=n;j>i;j--)
          {
               printf("%d ",j);
          }

          for(int j=i;j>0;j--)
          {
               printf("%d ",i);
          }
          for(int j=1;j<i;j++)
          {
               printf("%d ",i);
          }
          for(int j=i+1;j<n+1;j++)
          {
               printf("%d ",j);
          }


     }
}
