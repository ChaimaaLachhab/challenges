#include <stdio.h>

int main() {
    int annee;
    long long mois, jours, heures, minutes, secondes;

    printf("Entrez l'année : ");
    scanf("%d", &annee);

    mois = annee * 12;
    jours = annee * 365;
    heures = jours * 24;
    minutes = heures * 60;
    secondes = minutes * 60;

    printf("Menu:\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("Choisissez une option (1-5) : ");

    int choix;
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("%d années est égal à %lld mois\n", annee, mois);
            break;
        case 2:
            printf("%d années est égal à %lld jours\n", annee, jours);
            break;
        case 3:
            printf("%d années est égal à %lld heures\n", annee, heures);
            break;
        case 4:
            printf("%d années est égal à %lld minutes\n", annee, minutes);
            break;
        case 5:
            printf("%d années est égal à %lld secondes\n", annee, secondes);
            break;
        default:
            printf("Option invalide !\n");
    }

    return 0;
}

