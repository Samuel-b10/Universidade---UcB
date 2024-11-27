// Sala de aula - Alunos, Registros, Notas, Media e Frequencia 


// Declarando as bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declarando as funcoes
void blubblesort (char nomeF[10][50], int vetF[10], float mediaAlunoF[10]) {

    // variavel auxiliar para trocar os valores
    int get1;
    char get2[50];
    float get3;

    get1 = 0;
    get3 = 0.0;
    // laço de repetição para ordenar o vetor
    for (int i = 0; i < 10 - 1; i++) {
        
        // laço de repetição para ordenar o vetor
        for (int j = 0; j < 10 - 1; j++) {
           
            // if testar e ordenar o vetor
            if (mediaAlunoF[j] < mediaAlunoF[j + 1]) {
            
                get3 = mediaAlunoF[j];
                mediaAlunoF[j] = mediaAlunoF[j + 1];
                mediaAlunoF[j + 1] = get3;

                strcpy(get2, nomeF[j]);
                strcpy(nomeF[j], nomeF[j + 1]);
                strcpy(nomeF[j + 1], get2);
                
                get1 = vetF[j];
                vetF[j] = vetF[j + 1];
                vetF[j + 1] = get1;

            }
        }
    }

}


// Declarando funcao principal
int main() {
    
    // limpar a tela
    system("cls");    

    // declarando as variaveis
    char nome[10][50] = {"Alice", "Bruno", "Carlos", "Danilo", "Emerson","Fernanda","Gustavo","Hilda","Ivo","Jorge"};

    int vet1[10] = {745, 1267, 84, 267, 107, 942, 1103, 1006, 351, 351}; 

    float mediaAluno[10] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, mediaProva[3] = {0.0, 0.0, 0.0}, vet2[10] = {8.0, 12.0, 24.0, 6.0, 19.0, 0.0, 5.0, 7.0, 6.0, 0.0};
    
    float mat1[10][3] = {{5.50, 6.60, 4.00}, {7.80, 8.00, 3.50}, {9.00, 9.50, 8.75}, {6.50, 3.00, 2.55}, 
    {5.00, 4.35, 4.00}, {7.50, 4.00, 2.50 }, {7.55, 7.00, 4.00}, {9.00, 9.00, 6.75}, {5.00, 5.00, 5.00}, {4.00, 3.75, 4.85}};


    // Calcular a media de cada aluno e a media das provas e armazenar em um vetor
    for (int i = 0; i < 10; i++) {
        
        mediaAluno[i] = ( (mat1[i][0] * 2.0) + (mat1[i][1] * 3.0) + (mat1[i][2] * 5.0) )/ 10.0;

        mediaProva[0] += mat1[i][0];
        mediaProva[1] += mat1[i][1];
        mediaProva[2] += mat1[i][2];

        if (i == 9) {

            mediaProva[0] /= 10.0;
            mediaProva[1] /= 10.0;
            mediaProva[2] /= 10.0;
            
        }   
    }
    
    // Calculando a frequencia de cada aluno
    for (int i = 0; i < 10; i++) {
        
        vet2[i] = 100 -( ( vet2[i] / 32 ) * 100 ); 

    }


    // Exibindo alunos que estão média inferior a 5,00 e requência maior que 65%
    
    printf("\nAlunos que faram a prova final por esta com a nota inferior a 5,00 e a frequencia maior que 65%%\n\n");

    for (int i = 0; i < 10; i++) {
        

        if (mediaAluno[i] < 5.0 && vet2[i] > 65.0) {

            printf("Nome: %s\n", nome[i]);
            printf("Matricula: %d\n", vet1[i]);
            printf("Media: %.2f\n", mediaAluno[i]);
            printf("Frequencia: %.0f%%\n", vet2[i]);
            printf("\n\n");
        }
    }

    // Notas finais de todos os alunos (nome e registro acadêmico) em ordem decrescente
    blubblesort(nome, vet1, mediaAluno);

    printf("==================================\n\n");
    printf("Notas Finais em ordem decrescente\n\n");

    for (int i = 0; i < 10; i++) {

        printf("Nome: %s\n", nome[i]);
        printf("Matricula: %d\n", vet1[i]);
        printf("Media: %.2f\n", mediaAluno[i]);
        printf("Frequencia: %.0f%%\n", vet2[i]);
        printf("\n\n");
    }

    printf("==================================\n");

    // Média geral da turma para cada uma das 3 provas

    printf("Media geral das provas\n\n");

    for (int i = 0; i < 3; i++) {

        printf("\nMedia da %do prova: %.2f\n", i + 1, mediaProva[i]);

    }

    return 0;
}