#include<stdio.h>
int main()
{
     int arr[] = {2, 7, 9, 5, 8, 7, 4}, k = 5;
     int count=0,temp;
     for(int i=0;i<7;i++)
     {


               if(arr[i]>k)
               {
                    for(int j=i+1;j<7;j++)
                    {
                    if(arr[j]<=k)
                    {
                         temp=arr[i];
                         arr[i]=arr[j];
                         arr[j]=temp;
                         count++;
                         break;
                    }
                    }
               }

     }
     printf("%d\n",count);
     for(int i=0;i<7;i++)
     printf("%d, ",arr[i]);
}
