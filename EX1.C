//Maior de dois números

#include <stdio.h>

int main(){

    int num1;
    int num2;

    printf("-----------------\n");
    printf("  MAIOR NÚMERO\n");
    printf("-----------------\n");
    
    printf("Digite o primeiro numero: \n");
    scanf("%i", &num1);
    
    printf("Digite o segundo numero: \n");
    scanf("%i", &num2);
    
    if (num1 > num2){
        printf("O maior numero é %i", num1);
    }else if (num2 > num1){
        printf("O maior numero é %i", num2);
    }else {
        printf("Os numeros sao iguais %i e %i", num1, num2);
    }
    
    return 0;
}