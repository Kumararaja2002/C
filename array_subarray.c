#include<stdio.h>
int main()
{
     int n,i,j,sum=0,count=0,sum1=0;
     scanf("%d",&n);
     int arr[n];
     int arr1[10],arr2[10];
     for(int i=0;i<n;i++)
     scanf("%d",&arr[i]);
     for(i=0;i<n;i++)
     {

          if(arr[i]<0)
          {
               break;
          }
           count++;
          arr1[i]=arr[i];
     }
     int k=0;
     for(j=i+1;j<n;j++)
     {

          arr2[k]=arr[j];
          k++;
     }
     printf("[");
     for(int i=0;i<count;i++)
     {
     printf("%d, ",arr1[i]);
     sum+=arr1[i];
     }
     printf("]");
     printf("\n");
     printf("[");
     for(int i=0;i<k;i++)
     {
     printf("%d, ",arr2[i]);
      sum1+=arr2[i];
     }
     printf("]");
     if(sum>sum1)
     {
          printf("The answer is [");
     for(int i=0;i<count;i++)
     {
     printf("%d, ",arr1[i]);
     sum+=arr1[i];
     }
     printf("] as its sum is larger");
     }
}
