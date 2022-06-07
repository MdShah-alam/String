#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],ch;
    fgets(str,100,stdin);
    int count[26]= {0};
    int n=strlen(str);

    for(int i=0; i<n; i++)
    {
        ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            count[ch-'a']++;
    }
    for(ch='a'; ch<='z'; ch++)
    {
        if(count[ch-'a']>0)
            printf("ch->%c  count->%d\n",ch,count[ch-'a']);
    }
}
