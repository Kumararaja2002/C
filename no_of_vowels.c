#include<stdio.h>
int main()
{
    char sen[100];
    int vowel=0,consonant=0;
    scanf("%[^\n]s",sen);
    for(int i=0;sen[i]!='\0';i++)
    {
        if(sen[i]=='a'||sen[i]=='e'||sen[i]=='i'||sen[i]=='0'||sen[i]=='u'||
           sen[i]=='A'||sen[i]=='E'||sen[i]=='I'||sen[i]=='O'||sen[i]=='U')
           vowel++;
           else if(sen[i]==' ')
           {
                continue;
           }
           else
            consonant++;
    }
    printf("no of vowels:%d",vowel);
      printf("\nno of consonant:%d",consonant);

}
