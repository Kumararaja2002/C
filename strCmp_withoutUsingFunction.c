#include<stdio.h>
#include<string.h>
int main()
{
     int len1,len2,flag=0;
     char s1[100],s2[100];
     scanf("%s",s1);
     scanf("%s",s2);
     len1=strlen(s1);
     len2=strlen(s2);
     for(int i=0;s1[i]!='\0'||s2[i]!='\0';i++)
     {
          if(s1[i]!=s2[i])
          {
           flag=1;
           break;
          }
     }
     if(flag==1)
     printf("not equal");
     else
     printf("equal");


}
