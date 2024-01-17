#include <stdio.h>

int main()
{
    int arr[5][5]={{0,1,0,0,1},
    {1,0,1,1,0},
    {0,1,0,0,1},
    {1,0,1,1,0},
    {0,1,0,0,1}};
    int i=0,j=0,l=0,k=0;

    for(i=0;i<5;i++)
    {

            for(k=0;k<i;k++)
            {
                for(j=0;j<5;j++)
                {
                   if(arr[i][j]!=arr[k][j])
                   {
                    break;
                   }

                }
                if(j==5)
                {
                break;
                }
            }

            if(k==i)
            {
                printf("\ni=%d  ",i);
                for(l=0;l<5;l++)
                {
                printf("%d ",arr[i][l]);
                }
            }



    }


    return 0;
}
