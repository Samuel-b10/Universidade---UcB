// Atividade 03 - quilômetros por litro cada carro

// Declarando as bibliotecas 
#include <stdio.h>
#include <stdlib.h>

// Declarando a principal
int main() {
    
    // limpar a tela
    system("cls");    

    // declarando as variaveis
    char modelo[5][50] = {"Ferrari", "opala", "lamborghini", "GT-R", " Formula 1"};
    float vet[5] = { 5.0, 4.8, 6.5, 7.4, 3.6}, kml_Maior = vet[0], kml_Menor = vet[0], kml_1000[5];
    int posicao1 = 0, posicao2 = 0;

    for (int i = 0; i < 5; i++) {

        printf("\nModelo: %s - %.2f km/l", modelo[i], vet[i]);
        
        if (kml_Maior < vet[i]) {

            kml_Maior = vet[i];
            posicao1 = i;

        }
        if (kml_Menor > vet[i]) {
            
            kml_Menor = vet[i];
            posicao2 = i;

        }
           
        if (i == 4) {

            printf("\n");
            printf("\nO carro mais economico foi: %s", modelo[posicao1]);
            printf("\nO carro menos economico foi: %s", modelo[posicao2]);

        }
    }

    printf("\n");

    // Calculando quanto cada carro gasta ao percorrer 1000 km
    for (int i = 0; i < 5; i++){
        
        kml_1000[i] = 1000 / vet[i];
        printf("\n%s gastara %.0fL em 1000 km ", modelo[i], kml_1000[i]);

    }
    
    printf("\n");

    return 0;
}