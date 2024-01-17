#include<stdio.h>
int findDivisor( int num)
{
   int div = 1;
   while( num >9)
   {
      div*=10;
      num/=10;
   }
   return div;
}
int main()
{
    int num1 , num2 , newNum = 0,divisor=1,multi=1,dig;
    scanf("%d %d",&num1 ,&num2);
    int large = 0;
    while(num2)//45
    {
       if( (num2%10) > large)//45
          large = num2 % 10;//5
      num2 = num2 / 10;
    }

    divisor = findDivisor(num1);//567843  100000
    while( divisor )
    {
      dig = num1 / divisor;  //4
      num1 = num1% divisor; // 3

      if( dig < large)
      {
         newNum  = newNum * 10 +large;// 5678*10+5 56785
         newNum = newNum * divisor+num1;// 56785*10 + 3
         break;
      }
      newNum = newNum * 10 + dig;//5678
      divisor = divisor/10;//10
    }
    printf("%d", newNum);
}
