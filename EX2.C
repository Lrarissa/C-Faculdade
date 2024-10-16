//Número Par ou Ímpar

#include <stdio.h>

int main(){
    
    int num;
    
    printf("------------------\n");
    printf("  PAR OU IMPAR\n");
    printf("------------------\n");
    printf("Verificando se um numero é PAR ou IMPAR\n");
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("Numero PAR");
    }else{
        printf("Numero IMPAR");
    }
    
    return 0;
}