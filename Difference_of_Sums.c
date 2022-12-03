#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqsum=0,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sqsum+=(i*i);
        sum+=i;
    }
    sum*=sum;
    printf("%d",abs(sum-sqsum));
    return 0;
}