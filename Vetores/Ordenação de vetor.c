// ordenar um vetor com bubble sort
// bubble sort e um algoritmo de ordenação simples e eficiente

// declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

// função para ordenar o vetor
void blubblesort (int vet[5], int MAX) {

    // variavel auxiliar para trocar os valores
    int get;

    // laço de repetição para ordenar o vetor
    for (int i = 0; i < MAX - 1; i++) {
        
        // laço de repetição para ordenar o vetor
        for (int j = 0; j < MAX - 1; j++) {
           
            // if testar e ordenar o vetor
            if (vet[j] > vet[j + 1]) {
            
                get = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = get;

            }
        }
    }
}

// função principal
int main() {
    
    system("cls");    

    int vet[5];

    // laço de repetição para receber os valores do vetor
    for (int i = 0; i < 5; i++) {
        
        printf("digite o %do numero: ", i + 1);
        scanf("%d", &vet[i]);

    }
    
    // chamada da função: void blubblesort para ordenar o vetor
    blubblesort(vet, 5);

    printf("\n");

    // laço de repetição para imprimir os valores do vetor
    for (int i = 0; i < 5; i++) {
        
        printf(" %d", vet[i]);

    }

    printf("\n");
    return 0;
}