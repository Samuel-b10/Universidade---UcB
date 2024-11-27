// Atividade 04 - Numeros divisiveis por N

// declarando as bibliotecas
#include <stdio.h>
#include <stdlib.h>

// declarando a funcao principal
int main() {
    
    // limpar a tela
    system("cls");  

    // declarando as variaveis que vai utilizar
    int n;

    // imprimindo os divisores
    printf ("Numeros divisiveis por 4, entre 0 e 100:\n\n");  

    // laço de repetição para mostrar os divisores de 4 entre 0 e 100
    for (int i = 0; i <= 100; i++) {

        if (i % 4 == 0) {
            
            printf("%d ", i);

        }
    }
    
    printf("\n");

    printf("\n========================================\n");

    // pedindo um valor para imprimir seus divisores
    printf("\nDigite um numero entre 0 a 100: \n");
    scanf("%d", &n);


    printf("\nNumeros divisiveis por %d :", n);


    // laço de repetição para mostrar os divisores do numero digitado
    for (int i = 0; i <= 100; i++) {

        if (i % n == 0) {
            
            printf(" %d ", i);

        }
    }

    printf("\n");

    printf("\n========================================\n");


    return 0;
}