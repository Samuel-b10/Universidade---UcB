// colocando os vetores em ordem em um terceiro vetor

// declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>

// declaração de constantes
#define MAX 10
#define MAX2 20

// função principal
int main() {
    
    // limpar a tela
    system("cls");

    // declaração dos vetores e variaveis
    int vet1[MAX], vet2[MAX], vet3[MAX2];
    int j, i, n1, n2, n3;

    // carregar os vetores vet1 com numeros digitados ordenados
    printf ("Digite os numeros do 1o vetor...\n");

    for (i = 0; i < MAX; i++) {
        scanf ("%d", &vet1[i]);
    }

    // carregar os vetores vet2 com numeros digitados ordenados
    printf ("Digite os numeros do 2o vetor...\n");

    for (i = 0; i < MAX; i++) {

        scanf ("%d", &vet2[i]);

    }

    // colocar os numero em orderm no 3o vetor...
    n1 = n2 = MAX;  
    n3 = MAX2;

    // inicialização 
    i = j = 0;

    // laço de repetição para percorrer o vet3 todo
    for (int k = 0; k < n3; k++) {


        if (i >= n1) {

            vet3[k] = vet2[j];
            j++;

        } else {

            if (j >= n2) {
                
                vet3[k] = vet1[i];
                i++;

            } else {

                if (vet1[i] < vet2[j]) {
                    
                    vet3[k] = vet1[i];
                    i++;

                } else {

                    vet3[k] = vet2[j];
                    j++;

                }
            }
        }
    }

    // imprimir os valores do vetor
    for (i = 0; i < MAX2; i++) {
        
        printf("%d ", vet3[i]);

    }
    
    return 0;
}