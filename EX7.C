#include <stdio.h>

int main()
{
    int M, cont = 0;
    
    printf("Quantas vezes vc quer ver essa mensagem? ");
    scanf("%d", &M);
    
    while(cont < M){
        printf("Ola mundo!\n");
        
        cont++;
    }
    
    
    

    return 0;
}