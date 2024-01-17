#include<stdio.h>
int main()
{
     int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
     int temp,lowervalue=14,highervalue=20;
     for(int i=0;i<13;i++)
     {
          for(int j=i+1;j<13;j++)

          {
               if(arr[i]>=lowervalue)
               {
                    {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    }
               }

          }
     }
      for(int i=0;i<13;i++)
     {


          {
               if(arr[i]>=highervalue )
               {
                             for(int j=i+1;j<13;j++)
                    {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    }
               }

          }
    }

     for(int i=0;i<13;i++)
     printf("%d ",arr[i]);

}
