#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf( "%d",&n);
    char str[n][20],temp[20];
    for(int i=0;i<n;i++)
        scanf("%s",str[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        if(strcmp(str[j],str[j+1])>0)
        {
            strcpy(temp,str[j]);
            strcpy(str[j],str[j+1]);
            strcpy(str[j+1],temp);

        }

    }
    for(int i=0;i<n;i++)
    printf("%s\n",str[i]);
}
