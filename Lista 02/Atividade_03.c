// Atividade 03 - Media Aritmética e Ponderada - Função

// declarando as bibliotecas
#include <stdio.h>
#include <stdlib.h>


// Fução que calcula a media aritmética e a ponderada:
float mediaCalculo (float n1,float n2,float n3, char letra) {

    float mediaF;

    if (letra == 'A') {
        
        mediaF = ( n1 + n2 + n3) / 3.0;

    } else {

        mediaF = ( n1 * 5 + n2 * 3 + n3 * 2) / 10.0;

    }
    
    return mediaF;
}


// declarando a função principal
int main() {
    
    // limpar a tela
    system("cls");    

    // declarando as variáveis
    float n1, n2, n3, media;
    char letra;


    // pedindo as notas e a letra para calcular a media ou media ponderada
    printf("Digite a 1o nota:\n");
    scanf("%f", &n1);

    printf("Digite a 2o nota:\n");
    scanf("%f", &n2);

    printf("Digite a 3o nota:\n");
    scanf("%f", &n3);

    // pedindo a letra que seja A para media aritmética ou P para media ponderada e repetindo o processo ate que seja A ou P
    do {

        printf("Digite a letra A ou P:\n");
        scanf("%s", &letra); 
       
    } while (letra != 'A' && letra != 'P');
    
    // chamando a função
    media = mediaCalculo(n1, n2, n3, letra);

    // imprimindo o resultado
    if (letra == 'A') {
        
        // imprimindo a media
        printf("\nA media aritmetica calculada e %.1f\n", media);

    } else {

        // imprimindo a media ponderada
        printf("\nA media ponderada calculada e %.1f\n", media);

    }

    return 0;
}