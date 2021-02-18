#include <stdio.h>
int main()
{
    int k,i=2,x,n=0;

    scanf("%d",&k);

   while(k>=i)
   {
       if(k%i==0)
       {
           x = i;
           k = k/x;
           n++;
           printf("%d\n",x);
       }
       else
       {
           i++;
       }
   }
   printf("%d",0);

   return 0;

}
