#include<stdio.h>
#include<math.h>
int main()
{
    float sum=0;
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum+=sqrt(i);
    }
    printf("%.2f",sum);
}