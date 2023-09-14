#include <stdio.h>

int main()
{
    float pi = 3.14;
    int r;
    float d;
     printf("entrer le rayon :" );
    scanf("%d",&r);
    d = pi*2*r;
    printf("circonférence d'un cercle est :%.2f", d);
    return 0;
}
