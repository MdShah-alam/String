#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int val,max=ar[0];
    int count[11]= {0};
    for(int i=0; i<n; i++)
    {
        val=ar[i];
        count[val]++;
        if(max<ar[i])
        {
            max=ar[i];
        }
    }
    for(int val=0; val<=10; val++)
    {

        if(count[val]>0)
        {
            printf("value =%d count->%d\n",val,count[val]);
        }
    }

}
