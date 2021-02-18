#include <stdio.h>
int main()
{
    int n,pp,i,x,max,loca;

    scanf("%d",&n);

    int pt[n];

    for(i=0;i<n;i++)
    {
        pt[i] = 0 ;
    }

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&pp);
        pt[x-1] = pt[x-1]+pp;
    }

    max = pt[0];
    loca = 1;
    for(i=1;i<n;i++)
    {
        if(max<pt[i])
        {
            max = pt[i];
            loca = i+1;

        }
    }
    printf("%d %d",loca,pt[loca-1]);


    return 0;
}
