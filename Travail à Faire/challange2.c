#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;

    printf("entre la température en Fahrenheit: \n");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit - 32)/ 1.8;
    printf("dogre celsius:%f",celsius);
    if (celsius <= 0)
        printf("temperature tres frois");
    else if( celsius < 10)
        printf ( "temperature frois ");
     else if ( celsius > 20  )
        printf( " temperature chaud ");
       else 
            printf("temperature tres chaud");
    return 0;
}
