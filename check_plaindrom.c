#include<stdio.h>
#include<string.h>

int main()
{
    char a[20],b[20];
    scanf("%s",a);
    strcpy(b,a);
    strrev(a);

    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]!=b[i])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
