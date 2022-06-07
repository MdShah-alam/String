#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int ans[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++)
    {
        ans[i]=a[i];
    }

    for(int i=0,j=n-1; i<j; i++,j--)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    for(int i=0; i<n; i++)
    {
        if(a[i]<=ans[i])
            a[i]=ans[i]-a[i];
        else
            a[i]=a[i]-ans[i];
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
