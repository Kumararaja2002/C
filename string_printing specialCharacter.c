#include<stdio.h>
int main()
{
    char str[200];
    gets(str);
    for(int i=0;str[i];i++)
    {
        if( ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')))
           {
               for(int j=i;str[j];j++)
            str[j]=str[j+1];
            i--;
           }
    }
    printf("%s",str);

}

