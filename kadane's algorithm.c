#include<stdio.h>
int main()
{
     int arr[]={-2,-3,4,-1,-2,1,5,-3};
     int innersum,sum,outersum=0;
     for(int i=0;i<8;i++)
     {
          innersum=0;
          sum=arr[i];//-2

          for(int j=i+1;j<8;j++)//(loop 8 time)j=1//j=2//j=3//j=4//j=5//j=6//j=7
          {
             sum+=arr[j];//sum=-2+(-3)=-5+4=-1+(-1)=-2-2=-4+1=-3+5=2-3=-1
             if(sum>innersum)//(-5>0)//(-1>0)//(-2>0)//(-4>0)//(-3<0)//(2>0)//(-1<0)
             {
             innersum=sum;//innersum=0//innersum=0//innersum=0//innersum=0//innersum=0//innersum=2//innersum=2
             }
          }
          if(innersum>outersum)
          {
               outersum=innersum;//outersum=2
          }

     }
     printf("%d",outersum);


}
