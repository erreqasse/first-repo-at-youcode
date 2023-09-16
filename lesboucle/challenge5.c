#include <stdio.h>

int main()
{
    int rev,c,d;
    scanf("%d",&c);
    rev = 0;
    d = c;
    while (d != 0)
    {
    d = c %10;
    if(d !=0)
     rev= rev *10 + d;
    c /=10;
    }
    printf("%d", rev);
    return 0;
}
