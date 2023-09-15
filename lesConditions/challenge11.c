#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    
   
   
  srand(time(NULL));
 char* jour[] = {"lundi","mardi","mercredi","jeudi","vendredi","samdi","dimanche"};
    int b = rand() % 7;

printf("jour %s", jour[b]);
   return(0);
}
