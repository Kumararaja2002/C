#include<stdio.h>
int main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int sum;
    scanf("%d",&sum);
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n;j++)
    {
        if(arr[i]+arr[j]==sum)
        {
          flag==1;
          arr[0]=i;
          arr[1]=j;

          break;
        }
    }
      printf("%d",arr[i]);

}
