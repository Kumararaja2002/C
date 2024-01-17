#include<stdio.h>
#include<string.h>
int main()
{
    char str[20000],ch;
    int ind,len,flag=0;
    scanf("%[^\n]\n",str);
    scanf("%c",&ch);

    for(ind=0;str[ind]!=0;ind++)
    {
        if(str[ind]!=ch)
        {
             printf("%c",str[ind]);
        }
        else if(str[ind]==ch)
        {
           // flag=1;
             if(flag==0)
            {
                printf("%c\n",str[ind]);
                flag=1;
            }
            else
                printf("%c",str[ind]);
        }
    }
    return 0;
}
