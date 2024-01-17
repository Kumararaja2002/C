#include<stdio.h>
int largest(int n,int arr[])
{
    int large;
     large=arr[0];
    for(int i=0;i<n;i++)
    {
       if(large<arr[i])
         large=arr[i];

    }
return large;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",largest(n,arr));
    return 0;
}
