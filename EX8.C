
#include <stdio.h>

int main()
{
    int cont = 1;
    
    printf("Números múltiplos de 3 até 10:\n");
    
    while(cont <= 10){
        if (cont % 3 == 0){
            printf("%d\n", cont);
        }
        cont++;
    }
    
    
    

    return 0;
}