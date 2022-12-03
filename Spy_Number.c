#include<stdio.h>
int main()
{
    int n,sum=0,rem,pro=1;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        pro*=rem;
        n/=10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else 
    {
        printf("Not Spy Number");
    }
}