#include <stdio.h>
#include <stdlib.h>

// Fonction pour fusionner deux sous-tableaux
void fusionner(int tableau[], int debut, int milieu, int fin) {
    int i, j, k;
    int n1 = milieu - debut + 1;
    int n2 = fin - milieu;

    // Création de deux tableaux temporaires
    int *tableauGauche = (int *)malloc(n1 * sizeof(int));
    int *tableauDroit = (int *)malloc(n2 * sizeof(int));

    // Copie des données dans les tableaux temporaires
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

    // Copie des éléments restants du tableauGauche, le cas échéant
    while (i < n1) {
        tableau[k] = tableauGauche[i];
        i++;
        k++;
    }

    // Copie des éléments restants du tableauDroit, le cas échéant
    while (j < n2) {
        tableau[k] = tableauDroit[j];
        j++;
        k++;
    }

    // Libération de la mémoire des tableaux temporaires
    free(tableauGauche);
    free(tableauDroit);
}

// Fonction récursive pour trier le tableau
void triFusion(int tableau[], int debut, int fin) {
    if (debut < fin) {
        // Trouver le milieu du tableau
        int milieu = debut + (fin - debut) / 2;

        // Trier les deux moitiés
        triFusion(tableau, debut, milieu);
        triFusion(tableau, milieu + 1, fin);

        // Fusionner les deux moitiés triées
        fusionner(tableau, debut, milieu, fin);
    }
}

int main() {
    // Exemple d'utilisation
    int taille;

    // Demander la taille de la liste
    printf("Entrez la taille de la liste : ");
    scanf("%d", &taille);

    // Créer une liste d'entiers
    int *liste = (int *)malloc(taille * sizeof(int));

    // Demander à l'utilisateur d'entrer les éléments de la liste
    printf("Entrez les elements de la liste : ");
    for (int i = 0; i < taille; i++)
        scanf("%d", &liste[i]);

    // Appel de la fonction de tri fusion
    triFusion(liste, 0, taille - 1);

    // Afficher la liste triée
    printf("Liste triee : ");
    for (int i = 0; i < taille; i++)
        printf("%d ", liste[i]);
    printf("\n");

    // Libération de la mémoire
    free(liste);

    return 0;
}

