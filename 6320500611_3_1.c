#include <stdio.h>
int main()
{
    int x[5][4],i,j,y[5];

    for(i=0;i<5;i++)
    {
        y[i] = 0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&x[i][j]);

            y[i] += x[i][j];
        }
    }
    int loca = 1,max=y[0];

    for(i=1;i<5;i++)
    {
        if(max<y[i])
        {
            max = y[i];
            loca = i+1;
        }
    }
    printf("%d %d",loca,y[loca-1]);

}
