
#include <stdio.h>

int main() {

    int age;
    char nom[70];
    char prenom[70];
    char sex[60];
    int numero[40];
    printf("votre nom\n");
    scanf("%s",nom);
    printf("votr prenom\n");
    scanf("%s",prenom);
    printf("votre sex\n");
    scanf("%s",sex);
    printf("votr numero\n");
    scanf("%s",numero);
    printf("votr age\n");
    scanf("%d",&age);
    printf("votre age : %d , votre numero : %ls , votre prenom : %s, votre nom : %s , votre sex : %s ", age,numero,prenom,nom,sex );
    

    return 0;
}
