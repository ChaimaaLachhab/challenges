#include <stdio.h>
#include <stdlib.h>

// Fonction pour fusionner deux sous-tableaux
void fusionner(int tableau[], int debut, int milieu, int fin) {
    int i, j, k;
    int n1 = milieu - debut + 1;
    int n2 = fin - milieu;

    // Cr�ation de deux tableaux temporaires
    int *tableauGauche = (int *)malloc(n1 * sizeof(int));
    int *tableauDroit = (int *)malloc(n2 * sizeof(int));

    // Copie des donn�es dans les tableaux temporaires
    for (i = 0; i < n1; i++)
        tableauGauche[i] = tableau[debut + i];
    for (j = 0; j < n2; j++)
        tableauDroit[j] = tableau[milieu + 1 + j];

    // Fusion des tableaux temporaires dans le tableau principal
    i = 0;
    j = 0;
    k = debut;
    while (i < n1 && j < n2) {
        if (tableauGauche[i] <= tableauDroit[j]) {
            tableau[k] = tableauGauche[i];
            i++;
        } else {
            tableau[k] = tableauDroit[j];
            j++;
        }
        k++;
    }

    // Copie des �l�ments restants du tableauGauche, le cas �ch�ant
    while (i < n1) {
        tableau[k] = tableauGauche[i];
        i++;
        k++;
    }

    // Copie des �l�ments restants du tableauDroit, le cas �ch�ant
    while (j < n2) {
        tableau[k] = tableauDroit[j];
        j++;
        k++;
    }

    // Lib�ration de la m�moire des tableaux temporaires
    free(tableauGauche);
    free(tableauDroit);
}

// Fonction r�cursive pour trier le tableau
void triFusion(int tableau[], int debut, int fin) {
    if (debut < fin) {
        // Trouver le milieu du tableau
        int milieu = debut + (fin - debut) / 2;

        // Trier les deux moiti�s
        triFusion(tableau, debut, milieu);
        triFusion(tableau, milieu + 1, fin);

        // Fusionner les deux moiti�s tri�es
        fusionner(tableau, debut, milieu, fin);
    }
}

int main() {
    // Exemple d'utilisation
    int taille;

    // Demander la taille de la liste
    printf("Entrez la taille de la liste : ");
    scanf("%d", &taille);

    // Cr�er une liste d'entiers
    int *liste = (int *)malloc(taille * sizeof(int));

    // Demander � l'utilisateur d'entrer les �l�ments de la liste
    printf("Entrez les elements de la liste : ");
    for (int i = 0; i < taille; i++)
        scanf("%d", &liste[i]);

    // Appel de la fonction de tri fusion
    triFusion(liste, 0, taille - 1);

    // Afficher la liste tri�e
    printf("Liste triee : ");
    for (int i = 0; i < taille; i++)
        printf("%d ", liste[i]);
    printf("\n");

    // Lib�ration de la m�moire
    free(liste);

    return 0;
}

