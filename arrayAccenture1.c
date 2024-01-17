#include<stdio.h>
int main()
{
     int num;
     scanf("%d",&num);
     int arr[num];
     for(int i=0;i<num;i++)
     {
          scanf("%d",&arr[i]);
     }
     int n,m;
     scanf("%d %d",&n,&m);
     for(int i=0;i<num;i++)
     {
          if(arr[i]-n<m)
          {
               arr[i]=arr[i]+1;
          }
     }
     for(int i=0;i<num;i++)
     {
          printf("%d ",arr[i]);
     }

}
