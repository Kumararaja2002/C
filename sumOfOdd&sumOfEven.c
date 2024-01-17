#include<stdio.h>
int main()
{
    int num,dig,evenSum=0,oddSum=0;
    scanf("%d",&num);
    while(num)
    {
        dig=num%10;
        if(dig%2==0)
        {
            evenSum+=dig;
        }
        else
        {
            oddSum+=dig;
        }
        num/=10;
    }
    printf("evenSum=%d\noddSum=%d",evenSum,oddSum);

}
