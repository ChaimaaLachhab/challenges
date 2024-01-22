#include <stdio.h>

int main() {
    
    int nombre;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    printf("La valeur en octal est : %o\n", nombre);// en Octal

    printf("La valeur en hexadécimal est : %X\n", nombre);// en Hexadecimal

    return 0;
}
