#include<stdio.h>
int main()
{
     char str[100];
     scanf("%s",str);
     char dig[10]={0};
     for(int i=0;str[i];i++)
     {
          switch(str[i])
          {
               case '0':
               dig[0]+=1;
               break;
                case '1':
               dig[1]+=1;
               break;
                case '2':
               dig[2]+=1;
               break;
                case '3':
               dig[3]+=1;
               break;
                case '4':
               dig[4]+=1;
               break;
                case '5':
               dig[5]+=1;
               break;
                case '6':
               dig[6]+=1;
               break;
                case '7':
               dig[7]+=1;
               break;
                case '8':
               dig[8]+=1;
               break;
                case '9':
               dig[9]+=1;
               break;
               default:
               break;


          }
     }
     for(int j=0;j<10;j++)
     printf("%d ",dig[j]);
}
