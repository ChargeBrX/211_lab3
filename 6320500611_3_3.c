#include <stdio.h>
int main()
{
    int k,i=2,n=1,b=0,x;
    scanf("%d",&k);
    x=k;
    if(k==1)
    {
        printf("%d\n%d",k,b=0);
    }
    else
    {
        while(k>=i)
        {
            if(k%i==0)
            {
                b = i;
                k = k/b;
                n = n*b;
                printf("%d\n",b);
                if(n==x)
                {
                    b=0;
                    printf("%d",b);
                }
            }
            else
            {
                i++;
            }
        }
    }
    return 0;

}
