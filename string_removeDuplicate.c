#include<stdio.h>
int main()
{
     int i,j;
     char str[100];
     scanf("%s",str);
     for(int i=0;str[i];i++)
     {
          for(int j=i+1;str[j];j++)
               {
                     if(str[i]==str[j])
                     {
                      for(int k=j;str[k];k++)
                       str[k]=str[k+1];
                        j=j-1;
                     }
               }

     }
     printf("%s",str);
}fgh
