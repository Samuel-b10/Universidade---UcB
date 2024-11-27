// Atividade 02 - Salário + 1,5% sobre o total faturado no mês

// Declarando as bibliotecas 
#include <stdio.h>
#include <stdlib.h>


int main() {
    
    // limpando a tela
    system("cls");    

    // Declarando as variaveis 
    float vet1[12] = {35000, 18500, 23800, 25000, 13900, 7800, 21900, 30000, 16600, 24100, 26500, 42400}, vet2[12], total = 0, salario = 2000.00;


    // Calculando o aumento do salario
    for (int i = 0; i < 12; i++) {

        vet2[i] = salario + (vet1[i] *  0.015);
        total += vet2[i];

        printf("Salario do mes %d = R$ %.2f\n", i + 1, vet2[i]);
        if (i == 11) {
            printf("\nTotal recebido no ano = R$ %.2f\n", total);
        }
        
    }

    return 0;
}