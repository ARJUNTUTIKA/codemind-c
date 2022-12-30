#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,esum=0,osum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0) esum+=a[i];
        else osum+=a[i];
    }
    printf("%d",abs(esum-osum));
    
    return 0;
}