// Atividade 02 - Media, Maior e Menor

// declarando as bibliotecas
#include <stdio.h>
#include <stdlib.h>

// declarando a funcao principal
int main() {
    
    // limpar a tela
    system("cls");  

    // declarando as variaveis que vai utilizar
    int a, b, c, d, e, soma, get;
    double media, mediaP;

    // pedindo um valor para o ano_atual
    printf("Digite cinco numeros aleatorios de 0 a 100.\n");

    printf("\nDigite o 1o numero:\n");
    scanf("%d", &a);

    printf("\nDigite o 2o numero:\n");
    scanf("%d", &b);

    printf("\nDigite o 3o numero:\n");
    scanf("%d", &c);

    printf("\nDigite o 4o numero:\n");
    scanf("%d", &d);

    printf("\nDigite o 5o numero:\n");
    scanf("%d", &e);

    
    printf("\n====================================\n");

    // Soma dos cinco numeros:

    soma = a + b + c + d + e;

    printf("\n A soma dos numeros sao: %d\n", soma);

    // Media dos cinco numeros:

    media = soma / 5.0;
    
    printf("\n A media dos numeros sao: %.2lf\n", media);

    // Média e percentagem dos números pares:
    
    int contPar, var;

    contPar = 0;
    mediaP = 0;

    for (int i = 1; i <= 5; i++) {

        switch (i) {

            case 1: var = a; break;
            case 2: var = b; break;
            case 3: var = c; break;
            case 4: var = d; break;
            case 5: var = e; break;
        
        }

        if (var % 2 == 0) {
           
            mediaP = mediaP + var;
            contPar++;

        } 
       
    }
    
    if (contPar != 0) {
       
        mediaP = mediaP / contPar;

    } else {

        mediaP = 0.0;

    }
    
    float percPar = 0.0;

    percPar = ( 100.0 * contPar ) / 5.0;
    
    // O maior dos cinco numeros:

    if (a < b) {
                
        get = a;
        a = b;
        b = get;

    }

    if (a < c) {
                
        get = a;
        a = c;
        c = get;

    }

    if (a < d) {
                
        get = a;
        a = d;
        d = get;

    }

    if (a < e) {
                
        get = a;
        a = e;
        e = get;

    }
            
    printf("\n O maior numero e %d\n", a);

    // Menor dos cinco numeros:

    if (a > b) {
                
        get = a;
        a = b;
        b = get;

    }

    if (a > c) {
                
        get = a;
        a = c;
        c = get;

    }

    if (a > d) {
                
        get = a;
        a = d;
        d = get;

    }

    if (a > e) {
                
        get = a;
        a = e;
        e = get;

    }

    printf("\n O menor numero e %d\n", a);
    printf ("\n Media dos numeros pares = %.2f \n", mediaP);
    printf ("\n Percentagem de numeros pares = %.2f %% \n", percPar);

    printf("\n====================================\n");


    return 0;
}


