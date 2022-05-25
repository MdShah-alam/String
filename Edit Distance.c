#include<stdio.h>
int main()
{
    char s[100];
    char t[100];
    scanf("%s %s",s,t);
    int i=0;
    while(t[i]!='\0')
    {
       if(s[i]!=t[i])
       {
           s[i]=t[i];
       }
       i++;
    }
    s[strlen(t)+1]='\0';
    printf("%s",s);
}
