#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("entre number\t");
    scanf("%d",&b);
    a=1;
    while(a <= 10)
    {
        printf("la valeur de %d * %d= %d %\n",a,b,a*b );
        a++;
    }
   return(0);
}
