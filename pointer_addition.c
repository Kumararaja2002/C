#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *p=&a,*q=&b;
    printf("add:%d ",*p+*q);
    return 0;

}
