#include<stdio.h>
int main()
{
    char word[100];
    int count=1;
    scanf("%[^\n]s",word);
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]==' ')
            count++;

    }
    printf("%d",count);
}
