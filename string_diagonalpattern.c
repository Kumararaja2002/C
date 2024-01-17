#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char str[100];
    scanf("%s",str);
    n=strlen(str)-2;
    for(int i=0;str[i];i++,printf("\n"))
    {
        for(int j=0;str[j];j++)
        {
            if(i==j||j==n-i+1)
            {
                printf("%c",str[j]);
            }
            else
            {
                printf(" ");
            }
        }
    }
}
