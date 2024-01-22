#include<stdio.h>

void fusion(int *a, int bas, int milieu, int haut) {
    int i, j, k;
    int n1 = milieu - bas + 1;
    int n2 =  haut - milieu;

    int Gauche[n1], Droite[n2];

    for (i = 0; i < n1; i++)
        Gauche[i] = a[bas + i];
    for (j = 0; j < n2; j++)
        Droite[j] = a[milieu + 1+ j];

    i = 0;
    j = 0;
    k = bas;
    while (i < n1 && j < n2) {
        if (Gauche[i] <= Droite[j]) {
            a[k] = Gauche[i];
            i++;
        }
        else {
            a[k] = Droite[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = Gauche[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = Droite[j];
        j++;
        k++;
    }
}

void triFusion(int *a, int bas, int haut) {
    if (bas < haut) {
        int milieu = bas+(haut-bas)/2;

        triFusion(a, bas, milieu);
        triFusion(a, milieu+1, haut);

        fusion(a, bas, milieu, haut);
    }
}

int main() {
    int a[] = {12, 11, 13, 5, 6, 7};
    int taille = sizeof(a)/sizeof(a[0]);

    printf("Tableau donné : \n");
    for (int i=0; i < taille; i++)
        printf("%d ", a[i]);
    printf("\n");

    triFusion(a, 0, taille - 1);

    printf("\nTableau trié : \n");
    for (int i=0; i < taille; i++)
        printf("%d ", a[i]);
    return 0;
}

