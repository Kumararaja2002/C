#include<stdio.h>
int divisor(int num)
{

    int div=1;
    while(num>9)
    {
        div*=10;
        num/=10;
    }
    return div;

}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",divisor(num));
}
