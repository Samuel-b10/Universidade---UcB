// inverter os valores de um vetor

// declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

// declaração das constantes
#define MAX 10

// função principal
int main() {

    // limpar a tela
    system("cls");    

    // declaração dos vetores
    int vet[MAX], vet2[MAX];


    // laço de repetição para receber os valores do vetor
    for (int i = 0; i < MAX; i++) {

        printf("Digite o %do numero: \n", i + 1);
        scanf("%d", &vet[i]);

    }

    // laço de repetição para inverter o vetor
    for (int i = 0; i < MAX; i++) {
        
        vet2[MAX - 1 - i] = vet[i];

    }

    // laço de repetição voltando os elementos do vetor invertido para o original
    for (int i = 0; i < MAX; i++) {
        
        vet[i] = vet2[i];

    }

    printf("\n");

    // imprimir o vetor
    for (int i = 0; i < MAX; i++) {

        printf("%d ", vet[i]);

    }

    printf("\n");
        

    return 0;
}