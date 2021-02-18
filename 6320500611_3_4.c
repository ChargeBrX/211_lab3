#include <stdio.h>
long long int pf(long long int x)
{
    long long int i,j,a;

    for(j=2; j<=x; j++)
    {
        if(x%j!=0)
        {
            if(j<x)
            {
                a = i;
            }
            else
            {
                a = x;
            }

        }
    }

    return a;


}
int main()
{
    long long int x,p,i=0,j,b=2,a;

    scanf("%lld",&x);

    long long int n[x];

    if(x==2)
    {
        a = 2;
        printf("%d",n[0]);
    }
    else if(x==3)
    {
        a = 3;
        printf("%d",n[0]);
    }
    else
    {
        a = pf(x);
    }

    printf("%d",a);
}
