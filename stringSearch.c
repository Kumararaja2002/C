#include<stdio.h>
int main()
{
     int flag=0;
    char str[1000],search;
    scanf("%s\n",str);
    scanf("%c",&search);
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(str[j]==search)
            {
                flag=1;
                break;
            }
        }
    }

     if(flag==1)
        printf("found");
     else
        printf("not found");

        return 0;
}
