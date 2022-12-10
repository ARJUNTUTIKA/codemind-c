#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d%d",&a,&b);
    n=21-(a+b);
    if(n<=10)
    {
        printf("%d",n);
    }
    else
    {
        printf("-1");
    }
}