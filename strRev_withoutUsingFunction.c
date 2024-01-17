#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char s1[100],temp;
    gets(s1);
    len=strlen(s1);
    for(int i=0;i<len/2;i++)
    {
        temp=s1[i];
        s1[i]=s1[len-1-i];
        s1[len-1-i]=temp;

    }
    printf("%s",s1);
}
