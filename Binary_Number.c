#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,t,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<pow(2,n);i++)
    {
        t=i;
        for(j=0;j<n;j++) a[j]=0;
        for(k=n-1;k>=0;k--)
        {
            a[k]=t%2;
            t/=2;
        }
        for(j=0;j<n;j++) printf("%d",a[j]);
        printf("
");
    }
    return 0;
}