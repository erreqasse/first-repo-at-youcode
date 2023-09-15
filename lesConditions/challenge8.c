#include <stdio.h>
#include <math.h>

int main()
{
    int x;
   
    printf( "la moyenne de eleve\n");
    scanf("%d",&x);
   if ( x < 10)
      printf( "il est recalé");
    else if(x >= 10 && x <= 12)
        printf( "passable");
    else if(x >= 12 && x <= 14)
        printf( " assez bien");
    else if(x >= 14 && x <= 16)
        printf( " mention bien");
    else if(x > 16)
        printf( "inclus");
   
  
}
