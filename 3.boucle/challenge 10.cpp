#include <stdio.h>

int main() {
    int n, max, sum = 0;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (n >= 0) {
        max = n;
        sum += n;
    } else {
        max = 0;
    }

    for (int i = 1; i < 10; i++) {
        printf("Entrez un nombre : ");
        scanf("%d", &n);

        if (n >= 0) {
            sum += n;

            if (n > max) {
                max = n;
            }
        }
    }

    printf("La somme des nombres positifs est : %d\n", sum);
    printf("Le maximum parmi les nombres positifs est : %d\n", max);

    return 0;
}

