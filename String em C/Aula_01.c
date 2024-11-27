// Aula 01 - Formas de declara e carregar a uma String

// Declarando as bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Declarando a funcao principal
int main() {
    
    // limpar a tela
    system("cls");    

    // Primeira forma de declara e carregar uma string
    char palavra[100];

    palavra [0] = 'F';
    palavra [1] = 'C';
    palavra [2] = ' ';
    palavra [3] = 'B'; 
    palavra [4] = 'a';
    palavra [5] = 'r';
    palavra [6] = 'c';
    palavra [7] = 'e';
    palavra [8] = 'l';
    palavra [9] = 'o';
    palavra [10] = 'n';
    palavra [11] = 'a';
    palavra [12] = '\0';
    
    printf("\n          %s \n", palavra);

    // Segunda forma de declara e carregar uma string
    char palavra2 [] = {'F','C',' ','B','a','r','c','e','l','o','n','a','\0'};

    printf("\n          %s \n", palavra2);

    // Segunda forma de declara e carregar uma string
    char palavra3 [] = "E o maior time do Mundo !!!";

    printf("\n   %s \n", palavra3);


    return 0;
}