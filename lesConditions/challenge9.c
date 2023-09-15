int main()
{
    char x;
   
    printf( "ecrire un carcter\n");
    scanf("%c",&x);
   
    
   if ((x >= 'A' && x <= 'Z')||(x >= 'a' && x <= 'z'))
      { 
           if (x >= 'A' && x <= 'Z')
             {   printf( " majuscule");
                 
             }
            if(x >= 'a' && x <= 'z')
               { 
                   printf( " minuscule");
                   
               }
      }
      
   return(0);
  
}
