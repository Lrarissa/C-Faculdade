#include <stdio.h>

	char op;
	int num1;
	int num2;
    int resul;

int main (){
	
	printf ("----------------------\n");
	printf (" Calculando com voce\n");
	printf ("----------------------\n");
	
	printf ("Digite o nuemro do operador que deseja fazer: \n");
	printf ("Operador 1: + \n");
	printf ("Operador 2: - \n");
	printf ("Operador 3: * \n");
	printf ("Operador 4: / \n");
    printf ("Operador 5: Sair\n");
	scanf (" %c", &op);
	
    if (op == '5') {            
        printf("Saindo...\n");    
        return 0;  
    }

    
	    printf ("Digite um numero: ");
	    scanf ("%i", &num1);

	    printf ("Digite o segundo numero: ");
	    scanf ("%i", &num2);
	

switch (op)
    {
    case '1': 
        resul = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, resul);

        break;
    case '2':
        resul = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, resul);
        
        break;
    case '3':
        resul = num1 * num2;
        printf("%d * %d = %d", num1, num2,resul);
        
        break;
    case '4':
        resul = num1 / num2;
        printf("%d / %d = %d", num1, num2,resul);
        
        break;
        
    default:
        printf("Operador invaludo! Execute o programa de novamente.");
        break;
    }
    
    return 0;
}