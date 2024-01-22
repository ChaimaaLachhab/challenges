#include <stdio.h>

int main() {
    int A, n;
    long long resultat = 1; 

    printf("Entrez la nombre entier positif : ");
    scanf("%d", &A);

    if (A < 0) {
        printf("Erreur : La base doit �tre un nombre entier positif.\n");
        return 1; 
    }

    printf("Entrez l'exposant (nombre entier non n�gatif) : ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Erreur : L'exposant doit �tre un nombre entier non n�gatif.\n");
        return 1; 
    }

    while (n > 0) {
        resultat *= A; 
        n--;
    }

    
    printf("Le r�sultat de %d � la puissance %d est : %lld\n", A, n, resultat);

    return 0;
}

