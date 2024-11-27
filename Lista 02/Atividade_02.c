// Atividade 02 - Par ou Impar - Função

// declarando as bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Fução que diz se e impar ou par:
// calculo para saber se e impar ou par: numero digitado / 2.
// se o resto for 0 e par se for 1 e impar.
int ParImpar (int num) {

    int n;

    n = num % 2;

    return n;
}


// declarando a função principal
int main() {
    
    // limpar a tela
    system("cls");    

    // declarando as variáveis
    int n, num;

    // pedindo um numero para saber se e par ou impar
    printf("Digite um numero:\n");
    scanf("%d", &num);

    // chamando a função
    n = ParImpar (num);

    // if e else para saber se e par ou impar
    if (n == 0) {
        
        // imprimindo o resultado se for par
        printf("\nO numero digitado e par\n");

    } else {

        // imprimindo o resultado se for impar
        printf("\nO numero digitado e impar\n");

    }
        

    return 0;
}