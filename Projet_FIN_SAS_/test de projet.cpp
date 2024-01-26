#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int taille = 0;

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    char Nom[50];
    char Pr[10];
    char Des[100];
    Date date_x; // date de faire cette tache
} Tache;

Tache T[100]; 
Tache t;


// modification de la tache
int modfTache() {
    getchar();
    printf("Ecrire le Nom de la tache à modifier\n");

    printf("Nom : ");
    fgets(t.Nom, sizeof(t.Nom), stdin);

    int tacheExiste = 0;
    for (int i = 0; i < taille; i++) {
        if (strcmp(T[i].Nom, t.Nom) == 0) {
            tacheExiste = 1;
            int choix1;

            while (choix1 != 6) {
                printf("\n");
                printf("tu peut changer quoi ?\n");
                printf("1- Nom\n");
                printf("2- Prioritee\n");
                printf("3- Description\n");
                printf("4- Jour\n");
                printf("5- Moix\n");
                printf("6- Annee\n");
                printf("7- Quitter la modification\n");
                printf("\n Veuillez entrer votre choix : ");
                scanf("%d", &choix1);

                switch (choix1) {
                    case 1:
                        printf("Nom : ");
                        fgets(T[i].Nom, sizeof(T[i].Nom), stdin);
                        printf("Modifier avec succès\n");
                        break;
                    case 2:
                        printf("Priorite : ");
                        fgets(T[i].Pr, sizeof(T[i].Pr), stdin);
                        printf("Modifier avec succès\n");
                        break;
                    case 3:
                        printf("Description :");
                        fgets(T[i].Des, sizeof(T[i].Des), stdin);
                        printf("Modifier avec succès\n");
                        break;
                    case 4:
                        printf("Jour : ");
                        scanf("%d", &T[i].date_x.jour);
                        printf("Modifier avec succès\n");
                        break;
                    case 5:
                        printf("Mois : ");
                        scanf("%d", &T[i].date_x.mois);
                        printf("Modifier avec succès\n");
                        break;
                    case 6:
                        printf("Annee : ");
                        scanf("%d", &T[i].date_x.annee);
                        printf("Modifier avec succès\n");
                        break;
                    case 7:
                        printf("Quitter la modification\n");
                        break;
                    default:
                        printf("\nVeuillez entrer un choix valide!\n");
                        printf("Modifier avec succès\n");
                        break;
                }
            }
        }
    }

    if (!tacheExiste) {
        printf("Cette Tache n'existe pas\n");
    }
    return 0;
}




// supprission  de tache
void suppTache() {
    getchar();
    printf("Ecrire les informations de la tache \n");
    int i;
    
    printf("Nom : ");
    fgets(t.Nom, sizeof(t.Nom),stdin);
    

    int tacheExiste = 0;
    for (int i = 0; i < taille; i++) {
        if (strcmp(T[i].Nom, t.Nom) == 0) {
            tacheExiste = 1;

            for (int j = i; j < taille - 1; j++) {
                T[j] = T[j + 1];
            }
            taille--;
            printf("Supprimer avec succès\n");
            break;
        }
    }

    if (!tacheExiste) {
        printf("Cette Tache n'existe pas\n");
    }
}


// affichage de tache
void afficherTache( Tache T[], int taille) {
    if (taille == 0) {
        printf("\n");
    } else {
        printf("La liste des Taches :\n\n");
        for (int j = 0; j < taille; j++) {
            printf("La tache %d : \n Nom : %s Priorite : %s Description : %s Date : %d/%d/%d \n\n", j,
                   T[j].Nom, T[j].Pr, T[j].Des, T[j].date_x.jour, T[j].date_x.mois, T[j].date_x.annee);
        }
    }
}

int existeTache(char Nom[]){

    for (int i = 0; i < taille; i++) {
        if (strcmp(T[i].Nom, Nom) == 0)  {
            printf("La tache existe déjà dans la liste\n");
            return 1;
        }
    return 0;
    }
}


//ajouter un tache
void ajouterTache() {
    getchar();
    printf("\nEcrire les informations de la tache \n");
    int i;
    
    printf("Nom : ");
    fgets(t.Nom, sizeof(t.Nom),stdin);
    
    if (existeTache(t.Nom)==1)  {
        printf("\n");
    }else{

        printf("Priorite : ");
        fgets(t.Pr, sizeof(t.Pr),stdin);

        printf("Description :");
        fgets(t.Des, sizeof(t.Des),stdin);

	    printf("La date de création: \n");
	
        printf("Jour : ");
        scanf("%d", &t.date_x.jour);
	
        printf("Moix : ");
        scanf("%d", &t.date_x.mois);
	
        printf("Annee : ");
        scanf("%d", &t.date_x.annee);
        
        T[taille]=t;
        taille++;
        printf("\n Ajouter avec succès\n");
   }
}


int main() {
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
                ajouterTache();
                break;
            case 2:
                // Afficher la liste des Taches
                afficherTache(T,taille);
                break;
            case 3:
                // Modifier une Tache
                modfTache();
                break;
            case 4:
                // Supprimer une Tache
                suppTache();
                break;
            case 5:
                // Ordonner les Taches
                break;
            case 6:
                // Filtrer les Taches
                break;
            case 7:
                printf("\nVous êtes hors du programme. Au revoir !\n");
                break;
            default:
                printf("\nVeuillez entrer un choix valide!\n");
                break;
        }
    }
   
    return 0;
}
