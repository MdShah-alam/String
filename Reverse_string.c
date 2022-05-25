#include<stdio.h>

char *ReverseConstString(char *str)
{
    int start,end,len;
    char temp,*ptr=NULL;
    len=strlen(str);
    ptr=(char*)malloc((len-1)*sizeof(char));
    ptr=strcpy(ptr,str);
    for(start=0,end=len-1;start<=end;start++,end--)
    {
        temp=ptr[start];
        ptr[start]=ptr[end];
        ptr[end]=temp;
    }
    return ptr;
}

int main()
{
    /**char s[100];
    scanf("%s",&s);
    strrev(s);
    printf("%s",s);*/
    const char const *str="shahalam";
    printf(" %s ",ReverseConstString(str));
    return 0;
}
