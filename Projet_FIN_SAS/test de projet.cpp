#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

typedef struct {
    int heur;
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    char Nom[50];
    char Des[1000];
    Date date_x; // date de faire cette tache
    char Pr[10];
} Tache;

void modfTache(Tache T[], int *taille){
	
	char nomTache[50];
    printf("Entrez le nom de Tache : ");
    scanf("%s", nomTache);

    int tacheExiste = 0;
    for (int i = 0; i < *taille; i++) {
        if (strcmp(T[i].Nom, nomTache) == 0) {
            for (int j = i; j < *taille - 1; j++) {
                T[j] = T[j + 1];
            }
            (*taille)--;
            tacheExiste = 1;
            printf("modifier avec succès\n");
            break;
        }
    }

    if (!tacheExiste) {
        printf("Cette Tache n'existe pas\n");
    }
}

void suppTache(Tache T[], int *taille) {
    char nomTache[50];
    printf("Entrez le nom de Tache : ");
    scanf("%s", nomTache);

    int tacheExiste = 0;
    for (int i = 0; i < *taille; i++) {
        if (strcmp(T[i].Nom, nomTache) == 0) {
            for (int j = i; j < *taille - 1; j++) {
                T[j] = T[j + 1];
            }
            (*taille)--;
            tacheExiste = 1;
            printf("supprimer avec succès\n");
            break;
        }
    }

    if (!tacheExiste) {
        printf("Cette Tache n'existe pas\n");
    }
}



void afficherTache(Tache T[], int taille) {
    if (taille == 0) {
        printf("La liste des Taches est vide\n");
    } else {
        printf("La liste des Taches :\n\n");
        for (int j = 0; j < taille; j++) {
            printf("La tache %d : \n Nom : %s \n Description : %s \n Date : %d/%d/%d/%d \n Priorite : %s\n\n", j,
                   T[j].Nom, T[j].Des, T[j].date_x.heur, T[j].date_x.jour, T[j].date_x.mois, T[j].date_x.annee, T[j].Pr);
        }
    }
}

void ajouterTache(Tache T[], int *taille) {
    Tache t;
    char nomTache[50];
    printf("Entrez le nom de Tache : ");
    scanf("%s", nomTache);

    int tacheExiste = 0;
    for (int i = 0; i < *taille; i++) {
        if (strcmp(T[i].Nom, nomTache) == 0)  {
            printf("La tache existe déjà dans la liste\n");
            tacheExiste=1;
            break;
        }
    }
    if (!tacheExiste) {

        for (int i = *taille; i < *taille + 1; i++) {
    
        	printf("Ecrire les informations de la tache \n");
    	
            printf("Nom : ");
            scanf("%s", t.Nom);

            printf("Description :");
            scanf("%s", t.Des);

	        printf("La date de création: \n");
	
	        printf("Heur  : ");
	        scanf("%d", &t.date_x.heur);
	
        	printf("Jour : ");
        	scanf("%d", &t.date_x.jour);
	
        	printf("Moix : ");
        	scanf("%d", &t.date_x.mois);
	
        	printf("Annee : ");
        	scanf("%d", &t.date_x.annee);
	

            printf("Priorite : ");
            scanf("%s", t.Pr);
        }
        T[*taille]=t;
        (*taille)++;
   }
}


int main() {
    int taille = 0;
    Tache T[100]; 
    int choix = 0;

    while (choix != 7) {
        printf("\n");
        printf("1- Ajouter une Tache\n");
        printf("2- Afficher la liste des Taches\n");
        printf("3- Modifier une Tache\n");
        printf("4- Supprimer une Tache\n");
        printf("5- Ordonner les Taches\n");
        printf("6- Filtrer les Taches\n");
        printf("7- Quitter le programme\n");
        printf("\n Veuillez entrer votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                // Ajouter une Tache
                ajouterTache(T, &taille);
                break;
            case 2:
                // Afficher la liste des Taches
                afficherTache(T, taille);
                break;
            case 3:
                // Modifier une Tache
                break;
            case 4:
                // Supprimer une Tache
                suppTache(T, &taille);
                break;
            case 5:
                // Ordonner les Taches
                break;
            case 6:
                // Filtrer les Taches
                break;
            case 7:
                printf("Vous êtes hors du programme. Au revoir !\n");
                break;
            default:
                printf("Veuillez entrer un choix valide!\n");
                break;
        }
    }
   
    return 0;
}
