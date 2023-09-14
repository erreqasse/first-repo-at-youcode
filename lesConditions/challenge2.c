#include <stdio.h>

int main()
{
     char caract;
     printf("entre vous caratere:\n");
     scanf("%c", &caract);
     
     if( caract == 'a' || caract == 'e' ||caract == 'i' ||caract == 'o' ||caract == 'u' ||caract == 'y')
     { 
         caract = caract - 32;
         
     }
     switch(caract)
     {
     case 'A':
        printf("vos caractere est voyelle");
        break;
     case 'E':
        printf("vos caractere est voyelle");
         break;
    case 'I':
        printf("vos caractere est voyelle");
         break;
    case 'O':
        printf("vos caractere est voyelle");
         break;
    case 'U':
        printf("vos caractere est voyelle");
         break;
    case 'Y':
        printf("vos caractere est voyelle");
         break;
    default:
            printf("vos caractere est NON voyelle ");
     }
    return 0;
}
