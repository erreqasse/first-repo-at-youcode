#include <stdio.h>
#include <math.h>

int main()
{
    
    float x1;
    float y1;
    float x2;
    float y2;
    float d;
    printf("points x1\n");
    scanf("%f",&x1);
    printf("points y1\n");
    scanf("%f",&y1);
    printf("points x2\n");
    scanf("%f",&x2);
    printf("points y2\n");
    scanf("%f",&y2);
    d = sqrt(pow((x2-x1), 2) + pow((y2 - y1), 2));
    
     printf("Alors la distance entre deux point est: %.2f",d );
    return 0;
}
