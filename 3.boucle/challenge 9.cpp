#include <stdio.h>

int main() {
    int A, n;
    long long resultat = 1; 

    printf("Entrez la nombre entier positif : ");
    scanf("%d", &A);

    if (A < 0) {
        printf("Erreur : La base doit être un nombre entier positif.\n");
        return 1; 
    }

    printf("Entrez l'exposant (nombre entier non négatif) : ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Erreur : L'exposant doit être un nombre entier non négatif.\n");
        return 1; 
    }

    while (n > 0) {
        resultat *= A; 
        n--;
    }

    
    printf("Le résultat de %d à la puissance %d est : %lld\n", A, n, resultat);

    return 0;
}

