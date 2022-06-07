#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100],sumstr[101];
    scanf("%s %s",str1,str2);
    strrev(str1);
    strrev(str2);
    int i=0,j=0,k=0,hate=0;

    while(i<strlen(str1) && j<strlen(str2))
    {
        int sum=(str1[i]-'0')+(str2[j]-'0')+hate;
        sumstr[k]=sum%10+'0';
        hate=sum/10;
        i++;
        j++;
        k++;
    }

    while(i<strlen(str1))
    {
        int sum=(str1[i]-'0')+hate;
        sumstr[k]=sum%10+'0';
        hate=sum/10;
        i++;
        k++;
    }

    while(j<strlen(str2))
    {
        int sum=(str2[j]-'0')+hate;
        sumstr[k]=sum%10+'0';
        hate=sum/10;
        j++;
        k++;
    }

    if(hate>0)
    {
        sumstr[k]=hate+'0';
        k++;
    }
    else
    {
        sumstr[k]='\0';
    }

    strrev(sumstr);
    printf("%s",sumstr);
}
