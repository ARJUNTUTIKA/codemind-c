#include<stdio.h>
int main()
{
    int n,i;
    float sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sum/=n;
    printf("%.2f",sum);
}