#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    scanf("%s",a);
    int count[26]={0};

    for(int i=0;i<strlen(a)-1;i++)
    {
        char ch=a[i];
        count[ch-'a']++;
    }

    for(char ch='a' ; ch<='z' ; ch++)
    {
        if(count[ch-'a']==0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
