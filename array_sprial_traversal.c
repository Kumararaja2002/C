#include<stdio.h>
int main()
{
   // int arr[3][3] = {{1, 2, 3},{8, 9, 4},{7, 6, 5}};
    //int arr[5][5] = {{1, 2, 3,4,5},{16,17,18,19,6},{15,24,25,20,7},{14,23,22,21,8},{13,12,11,10,9}};
      int arr[5][4] = {{1, 2, 3,4},{14,15,16,5},{13,20,17,6},{12,19,18,7},{11,10,9,8}};

     int top,bottom,left,right;
     int i=0,j=0;

     for(top=0,bottom=4,left=0,right=3;top<=bottom;top++,bottom--,left++,right--)
     {
         for(i=top,j=left;j<=right;printf("%d ",arr[i][j]),j++);

         if(top==bottom)
         {break;}

         for(i=top+1,j=right;i<=bottom;printf("%d ",arr[i][j]),i++);

         for(i=bottom,j=right-1;j>=left;printf("%d ",arr[i][j]),j--);

         for(i=bottom-1,j=left;i>top;printf("%d ",arr[i][j]),i--);
     }
}
