#include<stdio.h>
int main()
{
    int n,i,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
for(int i=0;i<n;i++)
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
    for(int i=0;i<n;)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
               count++;
            }

        }
       printf("%d-%d ",arr[i],count);
       i+=count;
    }
}
