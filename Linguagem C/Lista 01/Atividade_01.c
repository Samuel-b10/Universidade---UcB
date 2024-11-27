// Atividade 01 - Aumento de Salário

// declarando as bibliotecas
#include <stdio.h>
#include <stdlib.h>

// declarando a funcao principal
int main() {
    
    // limpar a tela
    system("cls");
    
    // declarando as variaveis que vai utilizar
    double sal = 1000, perc = 1.5;
    int ano_atual;

    // pedindo um valor para o ano_atual
    printf("Digite o ano atual: \n");
    scanf("%d", &ano_atual);


    // laço de repeticão para calcular o aumento de salário a cada ano
    for (int i = 2018; i <= ano_atual; i++) {
        
        if (i == 2018) {

            sal = sal + (sal * perc) / 100;
            printf("Salario em 2006: %.2lf\n\n", sal);
            
            
        } else {

            perc = (2 * perc);
            sal = sal + perc/100 * sal;

            printf("Percentual acumulado de aumento do iqual a %.0lf%%\n", perc);

            printf("Salario em %d foi igual a %.2lf\n\n", i,sal);

            // Fazer a impressão na tela de maneira pausada "_sleep(....)"
            // _slepp(1000);
        }

    }
    

    return 0;
}