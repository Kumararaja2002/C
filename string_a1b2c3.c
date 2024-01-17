#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char a,a1,a2;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='0'&&str[i]<'9')
        {
            if(str[i+1]>='0'&&str[i+1]<'9')
            {
                a1=(str[i]-48);
                a2=(str[i+1]-48);
                a=a1*10+a2;
                for(int j=0;j<a-1;j++)
                {
                     printf("%c",str[i-1]);
                }
            i++;
            break;
            }

            a=str[i]-48;
           for(int j=0;j<a-1;j++)
            {

                printf("%c",str[i-1]);
            }

        }
        else
        {
            printf("%c",str[i]);
        }
    }
}
