#include <stdio.h>

int main()
{
    int  n;
    int x;
    int y;
    int z;
    printf("entre your number :\n");
    scanf("%d",&n);
    x = (n/100);
    y = ((n/10) -(x*10));
    z = n % 10;
    printf("%d %d %d",z,y,x);
}
