// codigo para o calculo do CPF

// declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

// declaração das constantes
#define MAX 11

// função principal 
int main() {
    
    system("cls");    

    // declaranos as variaveis que vai utilizar
    int vet[MAX];


    // laço de repetição para receber os 9 primeiros digitos do CPF
    for (int i = 0; i < 9; i++) {
        
        printf("Digite o %do. do CPF:", i + 1);
        scanf("%d", &vet[i]);
        
    }

    // calculando o primeiro digito verificador
    int soma = 0;
    for (int i = 0; i < 9; i++) {

        soma += vet[i] * (10 - i);

    }

    int resto1 = (soma % 11);

    if ( resto1 < 2) {

        vet[9] = 0;

    } else {

        vet[9] = 11 - resto1;

    }


    // calculando o segundo digito verificador
    soma = 0;
    for (int i = 0; i < 10; i++) {

        soma += vet[i] * (11 - i);

    }

    int resto2 = (soma % 11);

    if ( resto2 < 2) {

        vet[10] = 0;

    } else {

        vet[10] = 11 - resto2;

    }

    printf("\n");

    // imprimindo o CPF completo
    for (int i = 0; i < 11; i++) {

        printf("%d", vet[i]);

        if (i == 2 || i == 5) {
            printf(".");
        }
        
        if (i == 8) {
            printf("-");
        }
        

    }

    printf("\n");

    return 0;
}