#include<stdio.h>

void re_arrange(int N,int arr[])
{
//    for(int i=0; i<N; i++)
//    {
//        if(arr[i]%2==0)
//        {
//            for(int j=0; j<N; j=j+2)
//            {
//                arr[j]=arr[i];
//            }
//        }
//        else
//        {
//            for(int j=1; j<N; j=j+2)
//            {
//                arr[j]=arr[i];
//            }
//        }

    int odd=1;
    int even=0;
    int ans[N];
    for(int i=0;i<N;i++)
    {
        if(arr[i]%2==0)
        {
            ans[even]=arr[i];
            even+=2;
        }
        else
        {
            ans[odd]=arr[i];
            odd+=2;
        }
    }
    for(int i=0;i<N;i++)
    {
        arr[i]=ans[i];
    }
    for(int i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",arr[i]);
    }
    re_arrange(N,arr);
}
