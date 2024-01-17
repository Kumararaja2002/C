#include<stdio.h>
int main()
{
     int n,m,row,col;
     scanf("%d %d",&m,&n);
     int mat[row][col];
     for(int row=0;row<m;row++)
        for(int col=0;col<n;col++)
        scanf("%d",&mat[row][col]);
     for(int col=0;col<=n;col++,printf("\n"))
     {
          for(int row=0;row<m;row++)
          printf("%d ",mat[row][col]);

     }
}
