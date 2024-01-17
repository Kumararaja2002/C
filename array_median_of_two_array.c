#include<stdio.h>
int main()
{
     int ar1[] = {1, 12, 15, 26};
     int ar2[] = {2, 13, 17, 30, 45};
     int n=sizeof(ar1)/sizeof(ar1[0]),temp;
     int arr[9],k=0;
     for(int i=0;i<9;i++)
     {

       if(i>=n)
       {
            arr[i]=ar2[k];
            k++;
       }
       else
       {
            arr[i]=ar1[i];
       }
     }
          for(int i=0;i<9;i++)
     {
          for(int j=i+1;j<9;j++)

          {
               if(arr[i]>arr[j])
               {
                    {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    }
               }

          }
     }
     int n1=sizeof(arr)/sizeof(arr[0]);
     if(n1%2==0)
     {

          printf("%d",(arr[n1/2]+arr[(n1/2)-1])/2);
     }
     else
     {
          printf("%d",arr[n1/2]);
     }
}
