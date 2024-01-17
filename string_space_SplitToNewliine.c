#include<stdio.h>
#include<string.h>
int main()
{
     char str[100];
     scanf("%[^\n]s",str);
     for(int i=0;str[i];i++)
     {
          if(str[i]==' ')
          printf("\n");
          else
          printf("%c",str[i]);
     }
}
