#include<stdio.h>
#include<string.h>
int main()
{
    int len1,len2,count=0;
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1==len2)
    {
       for(int i=0;str1[i];i++)
       {
           for(int j=0;str2[j];j++)
           {
               if(str1[i]==str2[j])
               {
                   str2[j]='*';
               count++;
               break;

               }
            }

       }

    }
    if(count==len1)
        printf("ANAGRAM");
    else
        printf("NOT AN ANAGRAM");
    return 0;
}
