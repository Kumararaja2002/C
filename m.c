#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if(i>=(n/2)+2)
            {
                if(j==1||j==n)
                    printf("*");
                else
                    printf(" ");
            }
            else if(j==1||j==n||i==j||j==(n-(i-1)))
            printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }

}
