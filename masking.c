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

    return str;
}

int main()
{
    int a,b,c;
    char str[10];
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);

    to_binary(a,str,8);

    printf("The binary =%s\n",str);

    int x=a&(1<<b);

    to_binary(x,str,8);

     printf("The binary =%s\n",str);

    printf("%d\n",x);
    if(x)
        printf("1\n");
    else
        printf("0\n");
}
