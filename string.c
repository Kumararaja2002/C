// You are using GCC
#include<stdio.h>
#include<string.h>
int main()
{
   char str1[20],str2[20];
   int i=0,flag=0,flag1=0;
   scanf("%s %s",str1,str2);
   int l1=strlen(str1);
   int l2=strlen(str2);
   for (i=0;i<l2;i++)
   {
       if(str1[i]!=str2[i])
       {
           if(str1[i]=='?')
           {
               if(str1[i+1]==str2[i+1])
               {
                   flag1++;
                   continue;
               }
               else
               {
                   break;
               }

           }
           if(str1[i]=='*')
           {
               char a=str1[i+1];
               for(int j=i+1;j<l2;j++)
               {
                   if(str2[j]==a)
                   {
                       flag++;
                       break;
                   }

               }

           }

       }
   }
   if(flag!=0||flag1!=0)
   {
       printf("Yes");

   }
   else
   {
       printf("No");
   }
}
