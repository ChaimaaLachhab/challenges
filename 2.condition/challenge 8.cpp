#include <stdio.h>

int main() {
    double nombre;
    printf("Entrez un nombre: ");
    scanf("%lf", &nombre);

    if (nombre < 0)
        printf("Vous avez entré un nombre négatif.\n");
    else if (nombre > 0)
        printf("Vous avez entré un nombre positif.\n");
    else
        printf("Vous avez entré zéro.\n");

    return 0;
}

