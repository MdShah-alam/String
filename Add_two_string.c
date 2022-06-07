#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="Phitron member ";
    char str2[10];
    fgets(str2,10,stdin);

    strcat(str1,str2);

    printf("%s",str1);
}
