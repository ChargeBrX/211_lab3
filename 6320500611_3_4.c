#include <stdio.h>
int main()
{
    long long int x,p,i,j,a,b=2;

    scanf("%lld",&x);

    for(i=1;i<=9;i++)
    {
        b = b*10;
    }

    long long int n[x];

    for(j=1; j<8; j++)
    {
        if(x%j!=0)
        {
            a = j;
        }
    }

    printf("%d",a);
}
