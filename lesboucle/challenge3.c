#include <stdio.h>

int premier(int a) {
    
    int i;
    if(a <= 1)
    {
        return(0);
    }
    
    for(i=2;i *i<= a; i++)
    {
        if(a%i==0)
      {
         return 0;
      }
     
}
 return 1;
}
int main()
{
    int b,c;
    scanf("%d",&b);
    c = premier(b);
    if (c == 1 )
        printf("number est premier");
    else 
        printf("number n' est pas premier");
    return(0);
}
