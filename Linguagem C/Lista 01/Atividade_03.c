// Atividade 03 - Soma de 1 a N

// declarando as bibliotecas
#include <stdio.h>
#include <stdlib.h>

// declarando a funcao principal
int main() {
    
    // limpar a tela
    system("cls");  

    // declarando as variaveis que vai utilizar
    int n, soma;  

    // pedindo um valor para "n", que soma todos os valores ate chegar nele. Ex. n = 5 | 0 +1 + 2 + 3 + 4 + 5 = 15 
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    // imprimindo o valor de 0
    printf(" 0");

    // resetando a variavel
    soma = 0;

    // imprimindo todos os valores de 1 a n
    for (int i = 1; i <= n; i++) {

        printf(" + ");
        printf("%d", i);
        soma = soma + i;

    }

    // imprimindo o resultado da soma
    printf(" = %d", soma);


    return 0;
}