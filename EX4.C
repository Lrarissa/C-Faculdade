#include <stdio.h>

int main(){
    
    int num;
    
    printf("Escreva um numero: ");
    scanf("%d", &num);
    
    if (num > 0){
        printf("Numero positivo");
    }else if(num < 0){
        printf("Numero negativo");
    }else {
        printf("Numero é 0");
    }
    
}