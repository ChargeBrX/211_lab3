#include <stdio.h>
int main()
{
    int k,i=2,n=0,b=0;

    scanf("%d",&k);

    int a[k];
   while(k>=i)
   {
       if(k%i==0)
       {
           a[b] = i;
           b++;
           k = k/i;
           n++;
       }
       else
       {
           i++;
       }
   }
   int x[n+1];
   x[n] = 0;
   a[n] = 0;
   for(i=0;i<n+1;i++)
   {
       x[i]=a[i];
       printf("%d\n",x[i]);
   }

   return 0;

}
