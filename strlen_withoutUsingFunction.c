#include<stdio.h>
int main()
{
    int count=0;
    char name[100];
    gets(name);
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
}
