#include <stdio.h>

int main() {
    
    int nombre, inverse;

    printf("Entrez un nombre entier a trois chiffres : ");
    scanf("%d", &nombre);

    if (nombre < 100 || nombre > 999) {
        printf("Veuillez entrer un nombre a trois chiffres.\n");
        return 0;  
    }

    inverse = (nombre % 10) * 100 + ((nombre / 10) % 10) * 10 + nombre / 100;

    printf("L'inverse de %d est : %d\n", nombre, inverse);

    return 0;
}
