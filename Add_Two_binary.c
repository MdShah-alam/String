#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c;
    printf("Enter two binary numbers :");
    scanf("%d %d",&a,&b);
    int sum[100];
    int reminder=0,idx=0;
    while(a!=0 || b!=0)
    {
        sum[idx]=((a%10)+(b%10)+reminder)%2;
        reminder=((a%10)+(b%10)+reminder)/2;
        a=a/10;
        b=b/10;
        idx++;
    }
    if(reminder)
    {
        sum[idx]=reminder;
    }
     printf("\n sum is = ");
    while(idx>=0)
    {
        printf("%d",sum[idx]);
        idx--;
    }
     printf("\n");
}
