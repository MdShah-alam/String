#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    memset(ar,0,sizeof(ar));
//    for(int i=0;i<n;i++)
//    {
//        int val=a[i];
//        for(int j=i+1;j<n;j++)
//        {
//            if(val==a[j])
//            {
//                printf("%d ",val);
//            }
//        }
//    }
    for(int i=0;i<n;i++)
    {
        int val=a[i];
        ar[val]++;
    }
    for(int i=0;i<n;i++)
    {
        int val=a[i];
        if(ar[val]>1)
            printf("%d ",val);
    }

}
