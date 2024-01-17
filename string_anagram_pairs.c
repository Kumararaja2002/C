#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,count,a,b;
    scanf("%d",&n);
    char str[n][20];
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }

    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {

            count=0;
            for(a=0;a<strlen(str[i]);a++)
            {

            for(b=0;b<strlen(str[i]);b++)
            {

                if(str[i][a]==str[j][b])
                {
                    count++;
                }
            }
             if(count==strlen(str[i]))
        {
            printf("\n%d %d",i+1,j+1);
        }
            }
        }

    }
}
