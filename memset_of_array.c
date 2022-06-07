#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    memset(arr,0,sizeof(arr));
//in memset function there are three variables 1'st name of array,2nd zero(0),3rd sizeof array.
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
