#include<stdio.h>
int main()
{
char str[100];
int ind,num=0;
scanf("%[^\n]s",str);

for(ind=0;str[ind]!='\0';ind++)
{
if(str[ind]>='0' && str[ind]<='9')
{
num=num*10+(str[ind]-'0');
}
}
printf("%d",num);
return 0;
}
