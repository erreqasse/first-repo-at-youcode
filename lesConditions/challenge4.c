#include <stdio.h>
#include <math.h>

int main()
{
   int a;
   int b;
   int c;
   int x1,x2,d;
   printf("entre premier numbre a\n");
   scanf("%d",&a);
   printf("deuxiem number b\n");
   scanf("%d",&b);
   printf("trois number c\n");
   scanf("%d",&c);
   d = (b*b) - (4*a*c);
        
		if(d==0)
		{
			x1 = b / (2*a);
			printf("La solution est x = %d\n",x1);
		}
		else if(d > 0)
		{
			x1 = (-b-sqrt(d)) / (2*a);
			x2 = (-b+sqrt(d)) / (2*a);
			printf(" deux solutions est x1 = %d et x2 = %d\n",x1,x2);
		}
		else
		{
		
			printf("Aucune solution \n" );
		}
}
