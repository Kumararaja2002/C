#include<stdio.h>
int main()
{
    int n,i=0,rem;
    scanf("%d",&n);
    char str[20];
    while(n>0)
    {
        rem=n%26;
        if(rem==0  )
        {
            str[i]='Z';
            i++;
            n=(n/26)-1;
        }
        else
        {
            str[i]=(rem-1)+'A';
            i++;
            n=n/26;
        }
    }
    str[i]='\0';
    for(int i=0;str[i];i++);
        for(int i=i-1;i>=0;i--)
    printf("%c",str[i]);
    return 0;

}
