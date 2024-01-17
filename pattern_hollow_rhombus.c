#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     for(int i=1;i<=n;i++,printf("\n"))
     {
          for(int j=n;j>=1;j--)
          {
               if(i!=j)
               printf(" ");
               else
               printf("%d",j);

          }
          for(int j=2;j<=n;j++)
          {
               if(i!=j)
               printf(" ");
               else
               printf("%d",j);

          }
     }
     for(int i=n-1;i>=1;i--,printf("\n"))
     {
          for(int j=n;j>=1;j--)
          {
               if(i!=j)
               printf(" ");
               else
               printf("%d",j);

          }
          for(int j=2;j<=n;j++)
          {
               if(i!=j)
               printf(" ");
               else
               printf("%d",j);

          }
     }
}
