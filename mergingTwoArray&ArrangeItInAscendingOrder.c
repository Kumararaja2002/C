#include<stdio.h>
int main()
{
    int n,m,i,j,k,count,temp;
    scanf("%d %d",&n,&m);
    int arr1[n];
    int arr2[m];

    for(int i=0;i<n;i++)
    scanf("%d",&arr1[i]);

    for(int i=0;i<m;i++)
    scanf("%d",&arr2[i]);

    int tot=n+m;
    int arr[tot];

    for(i=0;i<n;i++)
    {
        arr[i]=arr1[i];
    }

    for(j=0;j<m;j++)
    {
        for(k=0;k<n;k++)
        {

        if(arr2[j]==arr[k])
        {
            break;
        }

        }
        if(k==n)
        {
        arr[i]=arr2[j];
        i++;
        }
    }

    for(int m=0;m<i;m++)
    {
        for(int j=m+1;j<i;j++)
        {
            if(arr[m]>arr[j])
            {
                temp=arr[m];
                arr[m]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n");
    for(int j=0;j<i;j++)
    printf("%d ",arr[j]);

}
/*
concatenation of the same array
#include<stdio.h>
int main()
{
     int n,m,i=0;
     scanf("%d",&n);
     int nums[n];
     for(i=0;i<n;i++)
     scanf("%d",&nums[i]);
     m=2*n;
     int result[m];
     for(;i<n;i++)
     {
          result[i]=nums[i];
     }
     for(int j=0;i<m,j<n;i++,j++)
     {
          result[i]=nums[j];
     }
     for(int i=0;i<m;i++)
     {
          printf("%d",result[i]);
     }
}*/
