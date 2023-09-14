#include <stdio.h>

int main()
{
      int x;
      printf("entrer vos number: \n");
      scanf("%d", &x);
      if(x % 2 == 0)
          printf("nombre pair\n");
      else
          printf("impair\n");
      return(0);
}
