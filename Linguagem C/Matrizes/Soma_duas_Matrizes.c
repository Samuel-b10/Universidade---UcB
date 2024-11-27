// Aula 01 - soma de duas matrizes

// Declarando as bibliotecas 
#include <stdio.h>
#include <stdlib.h>


// Funcao principal
int main() {
    
    // limpar a tela
    system("cls");    

    // declarando as matrizes
    int mat1[3][3], mat2[3][3], mat3[3][3];

    printf("\n");   

    // carregando as matrizes
    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {

            printf("Digite o elemento [%d][%d] da PRIMEIRA matriz: ", i, j);
            scanf("%d", &mat1[i][j]);

            printf("Digite o elemento [%d][%d] da SEGUNDA matriz: ", i, j);
            scanf("%d", &mat2[i][j]);

        }

        printf("\n");
        
    }


    // soma das matrizes
    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {

            mat3[i][j] = mat1[i][j] + mat2[i][j];

        }
    }

    printf("    Soma da matrizes\n\n");

    // imprimindo as matriz somada
    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {

            printf("%d ", mat3[i][j]);

        }

        printf("\n");
    }

    return 0;
}