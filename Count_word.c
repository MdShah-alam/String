#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char s[100];
    fgets(s,100,stdin);
    s[strlen(s)-1]='\0';

    bool word=true;
    int ans=0;

    for(int i=0;i<strlen(s);i++)
    {
        char ch=s[i];
        if(ch!=' ')
        {
            word=true;
        }
        if(ch==' ')
        {
            if(word==true)
            {
                ans++;
                word=false;
            }
        }
    }
    if(word==true)
    {
        ans++;
    }
    printf("%d\n",ans);
}
