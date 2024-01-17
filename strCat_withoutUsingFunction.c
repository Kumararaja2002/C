#include<stdio.h>
#include<string.h>
int main()
{
     int len1,len2,a,b;
     char s1[50],s2[50];
     scanf("%s",s1);
     scanf("%s",s2);
     len1=strlen(s1);
     len2=strlen(s2);
     for(int i=0;i<=len2;i++)
     {
          s1[len1+i]=s2[i];

     }
     printf("%s ",s1);
}
