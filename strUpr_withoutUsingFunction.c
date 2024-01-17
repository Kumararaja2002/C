#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    gets(s1);
    for(int i=0;s1[i]!='\0';i++)
         s1[i]>='a'&&s1[i]<='z'? s1[i]= s1[i]-32:s1[i];
    printf("%s",s1);
}
