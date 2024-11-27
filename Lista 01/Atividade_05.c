// Atividade 05 - Fatorial e Primordial

// declarando as bibliotecas
#include <stdio.h>
#include <stdlib.h>

// declarando as variáveis
int main() {
    
    // limpar a tela
    system("cls");
    
    // declarando as variaveis que vai utilizar
    int fat, prim, n;

    // pedindo um valor para imprimir seu fatorial e primordial
    printf("Digite um numero entre 0 a 50:\n");
    scanf("%d", &n);

    // resetando a variavel
    fat = prim = 1;

    // imprimindo o fatorial e primordial do numero digitado
    for (int i = 1; i <= n; i++) {

        // calculo do fatorial
        fat = fat * i;

        // usado switch para calcular o primordial
        switch (i) {

            case 1: prim = prim * i; break;
            case 2: prim = prim * i; break;
            case 3: prim = prim * i; break;
            case 5: prim = prim * i; break;
            case 7: prim = prim * i; break;
            case 11: prim = prim * i; break;
            case 13: prim = prim * i; break;
            case 17: prim = prim * i; break;
            case 19: prim = prim * i; break;
            case 23: prim = prim * i; break;
            case 29: prim = prim * i; break;
            case 31: prim = prim * i; break;
            case 37: prim = prim * i; break;
            case 41: prim = prim * i; break;
            case 43: prim = prim * i; break;
            case 47: prim = prim * i; break;
        
            default: break;
        }

    }


    // imprimindo o fatorial 
    printf ("\nFatorial de %d eh : %d \n \n", n, fat);

    // imprimindo o primordial
    printf ("\nPrimordial de %d eh : %d \n \n", n, prim);


    return 0;
}