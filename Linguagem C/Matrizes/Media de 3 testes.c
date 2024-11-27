// Atividade 02 - Media de 3 testes

// Declarando as bibliotecas 
#include <stdio.h>
#include <stdlib.h>

// Declarando a funcao principal
int main() {
    
    // limpar a tela
    system("cls");    

    // declarando as variaveis
    float mat1[10][3], mediaF[] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, mediaT[] = {0.0, 0.0, 0.0};
   
    // carregando as matrizes e calculando as medias
    for (int i = 0; i < 10; i++) {
        
        printf("Digite as notas do %do aluno: \n", i + 1);

        for (int j = 0; j < 3; j++) {

            scanf("%f", &mat1[i][j]);
            mediaT[j] += mat1[i][j];

        }
        
        mediaF[i] = (mat1[i][0] + mat1[i][1] + mat1[i][2]) / 3.0;

        printf("\n");

    }

    for(int j = 0; j < 3; j++) {
        
        mediaT[j] /= 10.0;

    }


    //Imprimir as medias dos alunos
   	printf(" \n");
	printf("Medias:\n");
	
   	for (int i = 0; i < 10; i++) {

   	   printf("Aluno %02d: ", i+1);
   	   
   	    for (int j = 0; j < 3; j++) {

   	        printf("%5.2f ", mat1[i][j] );	

	    }

        printf(" => %5.2f \n", mediaF[i]); 
   	}
    
    // Imprimir as medias dos testes
    printf("\nMedia dos testes:  ");
   
    for (int j = 0; j < 3; j++){

        printf(" %5.2f", mediaT[j]);

    }
   
    printf("\n");


    return 0;
}