#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(int i=0;i<n;i++,printf("\n"))
    {
          for(int j=n-i;j>0;j--)
           printf(" ");
           for(int k=i;k<=2*i;k++)
            printf("(");
             for(int j=1;j<=1;j++)
           printf("*");
           for(int k=i;k<=2*i;k++)
            printf(")");
    }

}
