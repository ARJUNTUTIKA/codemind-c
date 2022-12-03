#include<stdio.h>
int main()
{
    int i,n,l,u;
    scanf("%d %d %d",&n,&l,&u);
    for(i=l;i<=u;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
    return 0;
}