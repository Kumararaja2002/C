#include<stdio.h>
void find(int n,long long int arr[])
{
    int i,j,flag[10000]={0},count;
    for(i=0;i<n;i++)
   {
        count=1;
        if(flag[i]==0)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    flag[j]=1;
                }
            }
            if(count>=(n/2))
                break;
        }
    }
    if(count>=(n/2))
        printf("the majority element is :%lld",arr[i]);
    else
        printf("no majority");
}

int main()
{
    int i, n;
scanf("%d",&n);
long long int arr[n];
for(int i=0;i<n;i++)
scanf("%lld",&arr[i]);
find(n,arr);
return 0;
}
