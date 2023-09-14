#include <stdio.h>

int main()
{
    int a;
    int b;
    int c,moyenne;
    
    printf("premier entiers:\n");
     scanf("%d",&a);
    printf("deuxiem entiers\n");
     scanf("%d",&b);
    printf("troisiem entiers:\n");
     scanf("%d",&c); 
     moyenne = (a+b+c/3);
     printf("somme = %d ,",a + b +c );
     printf("moyenne = %d ,",moyenne );
    return 0;
}
