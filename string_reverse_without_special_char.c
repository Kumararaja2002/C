#include<stdio.h>
#include<string.h>
int main()
{
     char str[]="hello : 123@cbe";
     char temp;
     int i,j,k,a;
     for(j=0;str[j];j++);
     j=j-1;
     for(i=0;i<j;i++)
     {

          if(str[i]>='a'&&str[i]<='z')
          {
                for(k=j;k>0;k--)
                {
              if((str[k]>='a'&&str[k]<='z'))
              {
               temp=str[i];
               str[i]=str[k];
               str[k]=temp;
               j=k-1;
               break;
              }
              else
              {
                   continue;
              }
                }
          }
          else
          {
               continue;
          }
     }
     printf("%s",str);
}
