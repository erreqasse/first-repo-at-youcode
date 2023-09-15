#include <stdio.h>
#include <math.h>

int main()
{
   int annes;
   int chois;
   
   printf("vous menu pour converter:\n");
   printf("annes a mois:1:\n");
   printf("annes a jour:2:\n");
   printf("annes a heurs:3:\n");
    printf("annes a munites:4:\n");
    
   printf ("entre vos annes\n");
   scanf("%d",&annes);
   printf("printer vos choi\n");
   scanf("%d",&chois);
   
 
   
   switch(chois)
   {
       case 1:
            printf("convert annes a mois est : %d mois", annes * 12);
          break; 
        case 2 :
            printf("convert annes a jours est : %d jours", annes * 12 *365);
          break; 
        case 3:
            printf("convert annes a heurs est : %d heurs", annes * 12 * 365* 24);
          break;
        case 4:
            printf("convert annes a mois est : %d munites", annes * 12* 365* 24 * 60);
          break;
         default:
              printf("essayer a un autrefois");     
   }

}
