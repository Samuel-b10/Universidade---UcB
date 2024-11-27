#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() {
    
    system("cls");

    int i;
    double a, b, c, get;  

    printf("Digite um valor para A: \n");    
    scanf("%lf", &a);

    printf("Digite um valor para B: \n");    
    scanf("%lf", &b);

    printf("Digite um valor para C: \n");
    scanf("%lf", &c);

    printf("Escolha um numero 1, 2 ou 3 \n");
    scanf("%d", &i);

    switch (i) {

        case 1:
                
            printf("\nOrdem Crescente:\n\n");

            if (a > b) {
                
                get = a;
                a = b;
                b = get;

            }
            
            if (b > c) {

                get = b;
                b = c;
                c = get;

            }

            if (b < a) {
                
                get = a;
                a = b;
                b = get;

            }

            printf("%.1lf  %.1lf  %.1lf", a, b, c);

            printf("\n");

        break;

        case 2:

            printf("\nOrdem Decrescente:\n\n");

            if (a < b) {
                
                get = a;
                a = b;
                b = get;

            }
            
            if (b < c) {

                get = b;
                b = c;
                c = get;

            }

            if (b > a) {
                
                get = a;
                a = b;
                b = get;

            }
        
            printf("%.1lf  %.1lf  %.1lf", a, b, c);

            printf("\n");

        break;

        case 3:

            printf("\nO maior entre os outros dois: \n\n");

            if (a > b && a > c) {

                if (b > c) {

                    printf("%.1lf  %.1lf  %.1lf", c, a, b);

                } else {

                    printf("%.1lf  %.1lf  %.1lf", b, a, c);

                }
                
            } else if ( b > a && b > c) {

                if (a > c) {

                    printf("%.1lf  %.1lf  %.1lf", c, b, a);

                } else {

                    printf("%.1lf  %.1lf  %.1lf", a, b, c);

                }
               
            } else {

                if (a > b) {

                    printf("%.1lf  %.1lf  %.1lf", b, c, a);

                } else {

                    printf("%.1lf  %.1lf  %.1lf", a, c, b);

                }

            }
            
            printf("\n");
            
        break;

    }  

    getch();

    return 0;
}