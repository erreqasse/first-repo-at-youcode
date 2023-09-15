#include <stdio.h>

int main()
{
    int jour;
    int mois;
    int anne;
   
    printf( "ENTRE DATE sous form jj/mm/aaaa\n ");
    scanf("%d / %d / %d",&jour,&mois,&anne);
    printf( "%d/",jour);
   switch(mois)
   {
       case 1:
            printf("Janvier");
          break;
        case 2 :
            printf("février");
          break;
        case 3:
            printf("mars");
          break;
        case 4:
            printf("avril");
            break;
        case 5:
            printf("mai");
            break;
        case 6:
            printf("juin");
            break;
        case 7:
            printf("juillet");
            break;
        case 8:
            printf("aout");
            break;
        case 9:
            printf("september");
            break;
        case 10:
            printf("octobre");
            break;
        case 11:
            printf("november");
            break;
        case 12:
            printf("décembre");
            break;
    default :
            printf("essayer a un autrefois");
}
printf("/%d",anne);
   return(0);
}
