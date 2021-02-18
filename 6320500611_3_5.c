#include <stdio.h>
int main()
{
    int n,i,x;

    scanf("%d",&n);
    x = n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            n = n/i;
            if(n%i==0)
            {
                printf("%d is not a Lucky Number.",x);
            }
        }
    }
}
