#include<stdio.h>
#include<string.h>

char* strrev(char* str)
{
    if(!str || !*str)
        return str;
    int i=strlen(str)-1,j=0;
    while(i>j)
    {
        char ch=str[i];
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
    for(int i=idx; i<k; i++)
        str[i]='0';
    str[k]='\0';

    strrev(str);

    return str;
}

unsigned char Right_rotate(unsigned char mask,int k)
{
    int lastk=mask & ((1<<k)-1);
    return (mask>>k) | (lastk<<(8-k));
}

int main()
{
    unsigned int x;
    char str[100];

    printf("Enter an integer numbers :");
    scanf("%d",&x);

    to_binary(x,str,8);
    printf("%d = %s\n",x,str);

    unsigned char R=Right_rotate(x,2);

    to_binary(R,str,8);
    printf("%d = %s\n",R,str);
}
