#include <stdio.h>
#include <stdlib.h>

int soma (int a, int b, int c, int d, int e) {

    return a + b + c + d + e;

}

float media (int a, int b, int c, int d, int e) {

    return (a + b + c + d + e) / 5.0;     

}

float mediaP (int a, int b, int c, int d, int e) {
    
    int var, mediaP = 0, contPar = 0;

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

    return mediaP;
}

float percPar (int a, int b, int c, int d, int e) {

    int contPar, var;

    contPar = 0;

    for (int i = 1; i <= 5; i++) {

        switch (i) {

            case 1: var = a; break;
            case 2: var = b; break;
            case 3: var = c; break;
            case 4: var = d; break;
            case 5: var = e; break;
        
        }

        if (var % 2 == 0) {
        
            contPar++;

        } 
       
    }
    
    float percPar = 0.0;

    percPar = ( 100.0 * contPar ) / 5.0;

    return percPar;

}

int maior (int a, int b, int c, int d, int e) {
    
    int get;

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

    return a;

}

int menor (int a, int b, int c, int d, int e) {
    
    int get;

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

    return a;

}
int main() {
    
    system("cls");  

    int a, b, c, d, e, somaf, maiorF, menorF;
    double mediaf, mediaPf, percParf;

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


    // Soma dos cinco numeros:

    somaf = soma(a, b, c, d, e);

    // Media dos cinco numeros:

    mediaf = media(a, b, c, d, e);
    
    // Média e percentagem dos números pares:
    
    mediaPf = mediaP(a, b, c, d, e);
    
    percParf = percPar(a, b, c, d, e);  
    
    // O maior dos cinco numeros:
    
    maiorF = maior(a, b, c, d, e);
    
    // O menor dos cinco numeros:
    
    menorF = menor(a, b, c, d, e);


    
    printf("\n====================================\n");

    printf("\nSoma dos cinco numeros: %d", somaf);
    printf("\nMedia dos cinco numeros: %.1lf", mediaf);
    printf("\nMaior dos cinco numeros: %d", maiorF);
    printf("\nMenor dos cinco numeros: %d", menorF);
    printf("\nMedia dos pares: %.1lf", mediaPf);
    printf("\nPercentagem dos pares: %.1lf%%\n", percParf);
    

    printf("\n====================================\n");


    return 0;
}