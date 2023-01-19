#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float sqt;
    scanf("%d",&n);
    sqt=sqrt(n);
    if(sqt==floor(sqt)) printf("True");
    else printf("False");
    return 0;
}