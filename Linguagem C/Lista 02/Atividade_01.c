// Atividade 01 - Area do Circulo - Função

// declarando as bibliotecas
#include <stdio.h>
#include <stdlib.h>


// declarando as funções:
// Fução que calcula a área do circulo | calculo da área do circulo: " PI * raio ^ 2 ".
float areaCalculo (float r) {

    float pi = 3.1416, area;

    area = pi * (r * r);

    return area;
}


// função principal
int main() {

    // limpar a tela
    system("cls");    

    // declarando as variáveis
    float raio, area;

    // pedindo um valor para o raio
    printf("Digite o raio:\n");
    scanf("%f", &raio);

    // chamando a função que calcula a área do circulo
    area = areaCalculo (raio);

    // imprimindo o valor da área do circulo
    printf("\nA area do do circulo eh: %.2f\n", area);


    return 0;
}