#include <stdio.h>
int main()
{
    int k,i=2,x;

    scanf("%d",&k);

   while(k>=i)
   {
       if(k%i==0)
       {
           x = i;
           k = k/x;
           printf("%d\n",x);
       }
       else
       {
           i++;
       }
   }
}
