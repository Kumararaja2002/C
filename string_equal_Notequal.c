#include<stdio.h>
#include<string.h>
int main()
{
      long long int len1,len2,count=0;
      char str1[10000],str2[10000];
        gets(str1);
         gets(str2);
          len1=strlen(str1);
          len2=strlen(str2);
           if(len1!=len2)
                printf("Not Equal");
           else if(len1==len2)
            {
                for(int i=0;i<len1;i++)
                {
                     if(str1[i]==str2[i])
                    count++;
                    else
                        printf("Not Equal");
                        break;
                }
            }

           if(count==len1)
            printf("Equal");

}
