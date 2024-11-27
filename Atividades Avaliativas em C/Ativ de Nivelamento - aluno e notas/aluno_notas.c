// Atividade de Alunos e Notas

// Declarando as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Declarando as funcoes

// Função para = Media Geral das notas da disciplina
float mediaGeral(float notas[10]) {
    
    printf("    Media das notas da disciplina\n");

    float media;
    media = 0;

    for(int i = 0; i < 10; i++) {

        media += notas[i];

    }

    media /= 10;
    return media;

}

// Função para = nota final de um determinado aluno 
void notaFinal(int matricula[10], float notas[10], int codAluno) {

    for (int i = 0; i < 10; i++) {

        if (codAluno == matricula[i]) {
        printf("\nNota final do aluno: %.2f\n\n", notas[i]);
        }  

    }

}

// Função para =  relacao das Notas Finais em ordem decrescente
void blubblesort(float vet[10]) {

    float get;

    for (int i = 0; i < 10 - 1; i++) {
        
        
        for (int j = 0; j < 10 - 1; j++) {
           
           
            if (vet[j] < vet[j + 1]) {
            
                get = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = get;

            }
        }
    }
}

// Fução para = aprovacao ou nao de um determinado aluno (>= 5.0 para aprovar)
void aprovacao(int matricula[10], float notas[10], int codAluno) {

    for (int i = 0; i < 10; i++) {

        if (codAluno == matricula[i]) {

            printf("\nNota final do aluno: %.2f\n\n", notas[i]);
                        
            if (notas[i] >= 5.0) {

            printf("O aluno foi aprovado!\n");

            } else {

                printf("O aluno foi reprovado");

            }
        }  
    }
}

// Função para = maior nota da disciplina e quem a tirou
void maiorNota(float notas[10], int matricula[10]) {

    float maior = notas[0];
    int ind = 0;

    for (int i = 1; i <= 9; i++) {

        if ( maior < notas[i]) {

            maior = notas[i];
            ind = i;
        }

    }
    
    printf("\nO aluno %d teve a maior nota = %.2f", matricula[ind], maior);

}

// Função para = menor nota da disciplina e quem a tirou
void menorNota(float notas[10], int matricula[10]) {

    float menor = notas[0];
    int ind = 0;

    for (int i = 1; i <= 9; i++) {

        if ( menor > notas[i]) {

            menor = notas[i];
            ind = i;
        }

    }

    printf("\nO aluno %d teve a menor nota = %.2f", matricula[ind], menor);

}


// Declarando a funcao principal
int main() {
    
    // Limpando a tela
    system("cls");    

    // declarando as variaveis que vai utilizar
    int aux = 1, existe = 1, opcao, codAluno;
    float media;
    int matricula[10] = {74, 111, 12, 65, 67, 143, 3, 99, 44, 101};
    float notas[10] = {4.5, 8.7, 6.9, 5.0, 3.4, 4.9, 7.3, 7.8, 4.8, 5.8};
    float notasget[10] = {4.5, 8.7, 6.9, 5.0, 3.4, 4.9, 7.3, 7.8, 4.8, 5.8};


    do {
         
        system("cls");
        
        // Selcionando as opcoes
        printf("Selecione uma opcao: \n");

        printf("    1 - Media Geral das notas da disciplina\n");
        printf("    2 - Nota Final de um determinado aluno\n");
        printf("    3 - Relacao das Notas Finais em ordem decrescente\n");
        printf("    4 - Aprovacao ou nao de um determinado aluno (>= 5.0 para aprovar)\n");
        printf("    5 - Qual a maior nota da disciplina e quem a tirou?\n");
        printf("    6 - Qual a menor nota da disciplina e quem a tirou?\n");
        printf("    0 - Sair\n");

        // Lendo a opcao
        scanf("%d", &opcao);

        // Executando as opcoes
        switch (opcao) {  

            // Media Geral das notas da disciplina
            case 1: 
                
                system("cls");

                media = mediaGeral(notas);
                
                printf("\nMedia geral das notas: %.2f\n\n", media);
            
                break;

            // Nota Final de um determinado aluno 
            case 2:

                system("cls");
                
                printf("    Nota final de determinado aluno\n");
                printf("Matriculas registrada:\n\n");

                for (int i = 0; i < 10; i++) {
                                    
                    printf("Cod - %d\n", matricula[i]);

                }
                
                do {
               
                    printf("\nDigite a matricula do aluno: \n");
                    scanf("%d", &codAluno);
                    
                    existe = 1;
                    for (int i = 0; i < 10; i++) {
                        
                        if (codAluno == matricula[i] ) {
                            existe = 0;
                        }
                    }

                    if (existe == 1) {
                        printf("\nMatricula nao encontrada!\n");                        
                    }
                    
                    
                } while (existe == 1);

                notaFinal(matricula, notas, codAluno);

                break;

            // Relacao das Notas Finais em ordem decrescente
            case 3: 

                system("cls");

                blubblesort(notasget);

                printf("\nNotas finais em ordem decrescente:\n\n");
                
                for (int i = 0; i < 10; i++) {
                    
                    printf("%.2f - ", notasget[i]);                    

                }


                break;

            // Aprovacao ou nao de um determinado aluno (>= 5.0 para aprovar)
            case 4: 
                
                system("cls");
                
                printf("    Aprovacao de determinado aluno\n");
                printf("Matriculas registrada\n");

                for (int i = 0; i < 10; i++) {
                    
                    printf("Cod - %d\n", matricula[i]);

                }

                do {
                    
                    printf("\nDigite a matricula do aluno: \n");
                    scanf("%d", &codAluno);

                    existe = 1;
                    for (int i = 0; i < 10; i++) {
                        
                        if (codAluno == matricula[i] ) {
                            existe = 0;
                        }
                    }

                    if (existe == 1) {
                        printf("\nMatricula nao encontrada!\n");                        
                    }
                    
                    
                } while (existe == 1);

                aprovacao(matricula, notas, codAluno);

                break;

            // Qual a maior nota da disciplina e quem a tirou
            case 5:

                system("cls");

                printf("    Maior nota da disciplina\n");
                
                maiorNota(notas, matricula);


                break;
            
            // Qual a menor nota da disciplina e quem a tirou
            case 6: 

                system("cls");

                printf("    Menor nota da disciplina\n");

                menorNota(notas, matricula);

                break;

            default: break;
        }

        if (opcao == 0) {
            aux = 0;
        } else if (opcao > 6) {
        
            printf("Opcao invalida. Tente novamente.\n");
            printf("Pressione ENTER para continuar.\n");

        }

        getch();

    } while (aux == 1);

    return 0;
}