#include <stdio.h>

int main() {
    int n; 
	float inv = 0;

    printf("Entrez un entier : ");
    scanf("%d", &n);

    while (n != 0) {
        inv = inv * 10 + n % 10;
        n = n / 10;
    }

    printf("L'entier inversé est : %f\n", inv);

    return 0;
}

