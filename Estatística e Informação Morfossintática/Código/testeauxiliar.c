#include<stdio.h>
#include<math.h>

int main ()
{
   double x, fractpart, intpart;

   x = 5.35;
   fractpart = modf(x, &intpart);

   printf("整数部分 = %lf\n", intpart);
   printf("小数部分 = %lf \n", fractpart);
   
   return(0);
}