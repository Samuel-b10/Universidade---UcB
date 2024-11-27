// Validação de CPF - usando vetores e funçoes


// Declarando as bibliotecas 
#include <stdio.h>
#include <stdlib.h>


// Declarando as funcoes
void validarCPF(int vet[]) {

    // declarando as variaveis
    int somaTotal = 0, resto = 0, primDv, segDv;

    // laço de repetição para calcular o primeiro digitos verificador
    for (int i = 0; i < 9; i++) {
        
        somaTotal += vet[i] * (10 - i);

    }

    resto = (somaTotal % 11);

    if ( resto < 2) {

        primDv = 0;

    } else {

        primDv = 11 - resto;

    }

    somaTotal = 0;
    // laço de repetição para calcular o segundo digitos verificador
    for (int i = 0; i < 10; i++) {
        
        somaTotal += vet[i] * (11 - i);

    }

    resto = (somaTotal % 11);

    if ( resto < 2) {

        segDv = 0;

    } else {

        segDv = 11 - resto;

    }
    
    // Validando os digitos verificadores do CPF
    if ( primDv == vet[9] && segDv == vet[10] ) {
        
        printf("CPF Valido\n");

    } else {    
    
        printf("\nCPF Invalido\n");
    

        if ( primDv == vet[9] ) {
        
            printf("\nSomente o primeiro digito verificador eh valido\n");
            printf("\nO segundo digito verificador deveria ser: %d\n", segDv);

        } else {

            printf("\nOs digitos verificadores sao invalidos, deveria ser: %d e %d\n", primDv, segDv);

        }
    
    }
}


// Declarando a funcao principal
int main() {
    
    // limpar a tela
    system("cls");    

    // declarando as variaveis
    int vet[11];

    // laço de repetição para receber os digitos do CPF
    for (int i = 0; i < 11; i++) {
        
        printf("Digite o %do. do CPF:", i + 1);
        scanf("%d", &vet[i]);
        
    }

    // chamada da funcao para validar o CPF
    validarCPF(vet);

    return 0;
}