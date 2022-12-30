#include<stdio.h>
int main()
{
    int n,a,b,i,t=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)scanf("%d",&arr[i]);
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        a*=b;
        b=b/a;
        a/=b;
    }
    for(i=0;i<n;i++)if(arr[i]>=a && arr[i]<=b)continue;
    else
    {
        printf("%d ",arr[i]);
        t++;
    }
    if(t==0)
    {
        printf("-1");
    }
    
}