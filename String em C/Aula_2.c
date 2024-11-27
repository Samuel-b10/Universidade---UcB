// Aula 02 - Forma de inserir textos em String

// Declarando as bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Delacando constante
#define MAX 500

int main() {
    
    // limpar a tela
    system("cls");    


    char texto [MAX];
    int opcao;

    printf("\nEscolha uma opcao para String:\n");
    printf("    1 - scanf\n");
    printf("    2 - gets\n");
    printf("    3 - fgets\n\n");

    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
        
        // scanf
        printf("Digite uma string: ");

        scanf("%s", texto);

        printf("\nTexto com SCANF : %s\n\n", texto);
        
        break;


        case 2:

        // gets
        printf("Digite uma string: ");

        gets(texto);

        printf("\nTexto com GETS : %s\n\n", texto);

        break;

        case 3:

        // fgets
        printf("Digite uma string: ");

        fgets(texto, MAX - 1, stdin);
        strtok(texto, "\n");

        printf("\nTexto com FGETS : %s\n\n", texto);
        break;
    
        default:

        break;
    }

    return 0;
}