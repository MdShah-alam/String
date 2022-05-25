#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int n=strlen(s);
   // printf("%d",n);
    for(int i=0; i<n; i++)
    {
        int count=0;
        for(int j=i+1; j<n; j++)
        {
            if(s[i]==s[j])//bacbcabc
            {
                count++;
            }
        }
        if(count<1)
        {
            printf("%c",s[i]);
            break;
        }
    }
}
