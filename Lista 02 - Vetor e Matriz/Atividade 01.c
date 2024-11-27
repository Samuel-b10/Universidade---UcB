// Atividade 01 - maior e menor elemento de um vetor

// Declarando as bibliotecas 
#include <stdio.h>
#include <stdlib.h>


// funcao principal
int main() {
    
    // limpar a tela
    system("cls");    

    // declarando as variaveis
    int vet[20], maior = 0, menor = 0;

    for (int i = 0; i < 20; i++) {

        printf("Digite o %do numero: \n", i + 1);
        scanf("%d", &vet[i]);

        // verificando o maior e menor elemento do vetor
        if (i == 0) {

            maior = vet[i];
            menor = vet[i];
        }

        if (vet[i] > maior) {

            maior = vet[i];
            
        }
        if (vet[i] < menor) {
            
            menor = vet[i];

        }   
    }
    
    printf("\n");

    // Maior elemento do vetor
    printf("\nMaior elemento: %d\n", maior);

    // Menor elemento do vetor
    printf("\nMenor elemento: %d\n", menor);

    return 0;
}