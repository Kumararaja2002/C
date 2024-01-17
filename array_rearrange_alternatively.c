#include<stdio.h>
int main()
{
    int arr[]={-5, -2, -5, 2, 4, 7, 1,-4, 8, -9, -8};
     int temp;
     for(int i=0;i<11;i++)
     {
          if(i%2==0 && arr[i]>0)
          {
               for(int j=i+1;j<11;j++)
               {

                    if(arr[j]<0)
                    {
                         temp=arr[j];
                         arr[j]=arr[j-1];
                         arr[j-1]=temp;
                         i--;
                         break;
                    }
               }
          }
          else if(i%2!=0 && arr[i]<0)
          {
             for(int j=i+1;j<11;j++)
            {
              if(arr[j]>0)
              {
                   temp=arr[j];
                   arr[j]=arr[j-1];
                   arr[j-1]=temp;
                   i--;
                   break;
              }
            }

          }


     }
     for(int i=0;i<11;i++)
     printf("%d",arr[i]);
}
