#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++) if(n%i==0) sum+=i;
    if(sum==n) printf("PERFECT");
    else if(sum>n) printf("ABUNDANT");
    else printf("DEFICIENT");
}