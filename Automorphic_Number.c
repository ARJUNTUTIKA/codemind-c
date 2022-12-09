#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqr,m,i=0,p;
    scanf("%d",&n);
    m=n;
    sqr=n*n;
    while(m>0)
    {
        m/=10;
        i++;
    }
    p=pow(10,i);
    if((sqr%p)==n)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}