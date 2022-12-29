#include<stdio.h>
int main()
{
    int n,i,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0) min=a[0];
        else if(a[i]<min) min=a[i];
    }
    printf("%d",min);
}