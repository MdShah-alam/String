#include<stdio.h>
#include<string.h>

char* strrev(char* str)
{
    if(!str || !*str)
        return str;
    int i=strlen(str)-1,j=0;
    char ch;
    while(i>j)
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
        i--;
        j++;
    }

    return str;
}

char to_binary(unsigned int val,char str[],int k)
{
    int idx=0;
    while(val>0)
    {
        int d=val%2;
        val=val/2;
        str[idx]='0'+d;
        idx++;
    }
    for(int i=idx;i<k;i++)
        str[i]='0';
    str[k]='\0';
    strrev(str);

    printf(" %s\n",str);
}

int main()
{
    int n,a,b;
    char str[10];

    printf("Enter two integer number :");
    scanf("%d%d",&n,&a);

    to_binary(n,str,8);

    to_binary(a,str,8);

    to_binary(~a,str,8);

    to_binary(~a+1,str,8);

    b=n+(~a+1);

    to_binary(b,str,8);
    printf("%d",b);

}
