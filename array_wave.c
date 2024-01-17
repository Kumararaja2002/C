//Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place).
//In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

#include<stdio.h>
int main()
{
     int arr[]={2,4,7,8,9,10};
     int temp;
     for(int i=0;i<6;i++)
     {
         if((i%2==0)&&(arr[i]<arr[i+1]))
         {
              temp=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;

         }
     }
     for(int i=0;i<6;i++)
     printf("%d",arr[i]);
}
