// inverter os valores de um vetor com uma variável auxiliar

// declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

// declaração das constantes
#define MAX 10

// função principal
int main() {
    
    // limpar a tela
    system("cls");    

    // declaração das variáveis e vetores
    int vet[MAX], temp;


    // laço de repetição para receber os valores do vetor
    for (int i = 0; i < MAX; i++) {

        printf("Digite o %do numero: \n", i + 1);
        scanf("%d", &vet[i]);

    }

    // laço de repetição para inverter o vetor
    for (int i = 0; i < MAX / 2 ; i++) { 

        temp = vet[MAX - 1 - i];
        vet[MAX - 1 - i] = vet[i];
        vet[i] = temp;
        
    }

    printf("\n");

    // imprimir os valores do vetor
    for (int i = 0; i < MAX; i++) {
        
        printf("%d ", vet[i]);

    }

    printf("\n");

    return 0;
}