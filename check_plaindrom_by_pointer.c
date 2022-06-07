#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    scanf("%s",a);
    int j=strlen(a)-1,i=0;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            printf("No\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("Yes\n");
    return 0 ;
}
