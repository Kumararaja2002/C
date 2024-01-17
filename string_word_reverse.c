#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    gets(str);
    printf("%s",strrev(str));
    int i=0,j=0,k=0,start,end,tot;
    char temp;
    for(i=0;i<strlen(str);i=j+1)
    {
        for(j=i;str[j]!=' '&&str[j];j++)

        start=i;
        end=j-1;

       while(start<end)
        {
            temp=str[end];
            str[end]=str[start];
            str[start]=temp;
            start++;
            end--;
        }


    }

   printf("%s", str);


    return 0;
}
