#include <stdio.h>

int main(){

    //Usa-se switch em estruturas grandes ou confusas de if/else
    int n1;

    printf("Digite 1 ou 2: \n");
    scanf("%i", &n1);

    switch(n1){
        case 1:
            printf("Verdadeiro!\n");
            break;
        case 2:
            printf("Falso!\n");
            break;
        default:
            printf("Numero invalido\n");    
    }
    
    printf("FIM");

  return 0;
}
