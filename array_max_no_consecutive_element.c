#include<stdio.h>
int main()
{
    int arr[] = {1, 9,12,14, 3, 10, 4, 20,13, 2};
    int temp,count=0,n=10,a=0,l=0,i,j,k;
     for(i=0;i<n;i++)
     {
          for(int j=i+1;j<n;j++)
          {
               if(arr[i]>arr[j])
               {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
               }
          }
     }
     for(k=0;k<n;k=l)
     { a=0;
          for(l=k+1;l<n;l++)
          {
               if(arr[l]-arr[l-1]==1)
               {
                    a++;
               }
               else
               {
               break;
               }
          }
          if(a>count)
          {
               count=a+1;
          }

     }
      for(int i=0;i<n;i++)
     printf("%d ",arr[i]);
     printf("\n%d ",count);
}#include<stdio.h>
int main()
{
    int arr[] = {1, 9,12,14, 3, 10, 4, 20,13, 2};
    int temp,count=0,n=10,a=0,l=0,i,j,k;
     for(i=0;i<n;i++)
     {
          for(int j=i+1;j<n;j++)
          {
               if(arr[i]>arr[j])
               {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
               }
          }
     }
     for(k=0;k<n;k=l)
     { a=0;
          for(l=k+1;l<n;l++)
          {
               if(arr[l]-arr[l-1]==1)
               {
                    a++;
               }
               else
               {
               break;
               }
          }
          if(a>count)
          {
               count=a+1;
          }

     }
      for(int i=0;i<n;i++)
     printf("%d ",arr[i]);
     printf("\n%d ",count);
}
