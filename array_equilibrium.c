#include <stdio.h>
int main()
{
    int n,box1=0,box2=0;
    scanf("%d",&n);
    int arr[n];
    int i,j,k,a;
    for(a=0;a<n;a++)
    scanf("%d",&arr[a]);

    for(i=0;i<n;i++)
    {
        box1=0;
        box2=0;
        for(j=0;j<i;j++)
        {
            box1+=arr[j];
        }
         for(k=i+1;k<n;k++)
        {
            box2+=arr[k];
        }

     if(box1==box2)
     {
         printf("\n%d %d",i+1,arr[i]);
         break;
     }

    }
    if(i==(n-1))
    {
        printf("\nNO EQUILIBRIUM");
    }
    return 0;
}
