#include <stdio.h>

int main() {
    double nombre;
    printf("Entrez un nombre: ");
    scanf("%lf", &nombre);

    if (nombre < 0)
        printf("Vous avez entr� un nombre n�gatif.\n");
    else if (nombre > 0)
        printf("Vous avez entr� un nombre positif.\n");
    else
        printf("Vous avez entr� z�ro.\n");

    return 0;
}

