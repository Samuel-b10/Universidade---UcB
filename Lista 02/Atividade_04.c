// Atividade 04 - IMC - Função

// declarando as bibliotecas
#include <stdio.h>
#include <stdlib.h>


// Fução que calcula e mostra o IMC de uma pessoa:
float imcC (float peso, float altura) {

    float imc;

    imc = peso / (altura * altura);

    return imc;
}

// declarando a função principal
int main() {
    
    // limpar a tela
    system("cls");    

    // declarando as variáveis
    float peso, altura, imcF;

    // laço que pede o peso e altura e mostra o IMC
    do {

        // pedindo os dados
        printf("Digite o peso em KG:\n");
        scanf("%f", &peso);

        printf("Digite a altura em metros:\n");
        scanf("%f", &altura);

        // chamando a função
        imcF = imcC (peso, altura);

        // mostrando o resultado - IMC
        if (imcF <= 16.9) {
            printf("Muito abaixo do peso");
        } else if (imcF <= 18.4) {
            printf("Abaixo do peso");
        } else if (imcF <= 24.9) {
            printf("peso normal");
        } else if (imcF <= 29.9) {
            printf("Acima do peso");
        } else if (imcF <= 34.9) {
            printf("Obesidade grau I");
        } else if (imcF <= 40) {
            printf("Obesidade grau II");
        } else if (imcF >= 40.1){
            printf("Obesidade grau III");
        } else {
            break;
        }

        printf("\n\n");
        
    } while ( imcF != 0);
    

    return 0;
}