#include <stdio.h>

int main() {

    int num;
    int num2;

    printf("Escreva um numero: ");
    scanf("%d", &num);

    printf("Escreva outro numero: ");
    scanf("%d", &num2);

    if (num > num2) {
        printf("O primeiro numero é maior: %d\n", num);
    } else if (num2 > num) {
        printf("O segundo numero é maior: %d\n", num2);
    } else {
        printf("Os dois números são iguais!\n");
    }

    return 0;
}
