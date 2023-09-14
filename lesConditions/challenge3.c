#include <stdio.h>

int main()
{
   int a;
   int b;
   int c;
   printf("entre premier numbre\n");
   scanf("%d",&a);
   printf("deuxiem number\n");
   scanf("%d",&b);
   if( a == b)
   {  
       c = a*a*a;
       printf("la valeur est :%d",c);
   }
   else
        printf("la valeur est :%d",a+b);
   
}
