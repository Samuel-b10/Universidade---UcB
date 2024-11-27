#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    
    system("cls");  

    double racao, rgato, kgfinal;  

    printf("\nQual o peso do saco de racao dos gatos em kg:\n");
    scanf("%lf", &racao);

    printf("Quanto de racao cada gato consome em gramas:\n");
    scanf("%lf", &rgato);

    racao = racao * 1000.0;
    rgato = (rgato * 2.0) * 5;
    kgfinal = (racao - rgato) / 1000;


    printf("\n=================resultado=================\n");
    printf("\nRestara de racao no saco apos cinco dias:\n");
    printf("%.1lf kg", kgfinal);
    printf("\n\nconsumo dos dois gatos em cinco dias:\n");
    printf("%.1lf gramas", rgato);
    printf("\n\n===========================================\n");

    getch();

    return 0;
}