#include <stdio.h>

int main() {
    
    int s,c,l,d;
    scanf("%d",&c);
      l =1;
      d =1;
    while(c > 0 )
    {
        l =1;
        while( c - l>0 )
        {
          printf(" ");
            l+=1;
        }
         s = 1 ;  
        while( d >=s )
        {
          printf("*");
            s+=1;
            
        }
        
         d+=2;
        
        printf("\n");
        
        
        c--;
    }
    return 0;
}
