#include<stdio.h>
int main()
{
    int n,i,j,e=0,c;
    scanf("%d",&n);
    float a[n],avg=0;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            
            if(a[i]==a[j])
            {
                c++;
                if(i!=j)a[j]=0;
            }
        }
        if(c==a[i])
        {
            avg+=a[i];
            e++;
        }
    }
    if(e>0)
    {
        avg/=e;
        printf("%.2f",avg);
    }
    else
    {
        printf("-1");
    }
}