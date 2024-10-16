//Fatorial de um Número

#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fatorial = 1; 
    
    printf("-------------------------------\n");
    printf("     Fatorial de um Número\n");
    printf("-------------------------------\n");

    printf("Digite um número: \n");
    scanf("%i", &num);

    
    if (num < 0) {
        printf("Fatorial de número negativo não existe.\n");
    } else {
        for (i = 1; i <= num; ++i) {
            fatorial *= i; 
        }
        printf("Fatorial de %d = %llu\n", num, fatorial);
    }

    return 0;
}
