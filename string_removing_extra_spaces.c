#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int i,j;
    for(int i=0;str[i];i++)
    {
        if(str[i]==' '&&str[i+1]==' ')
        {
            for(int j=i;str[j];j++)
                str[j]=str[j+1];
            i--;

        }

    }
    printf("%s",str);
}

