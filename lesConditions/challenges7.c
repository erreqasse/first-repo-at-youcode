#include <stdio.h>
#include <math.h>

int main()
{
    char x;
   
    printf( "entrer alphabet\n");
    scanf("%c",&x);
   if (x > 'A' && x<'Z')
      printf( "caractère donné est un alphabet majuscule");
    else
        printf( " non majuscule");
   
  
}
