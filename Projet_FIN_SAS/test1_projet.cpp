#include <stdio.h>
#include <string.h>

// Déclaration des structures
typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    char Nom[50];
    char Pr[20]; 
    char Des[100];
    Date date_x; // date de faire cette tache
} Tache;

// Déclaration des variables globales
Tache T[500];
Tache t;
int taille = 0;

int existeTache(char Nom[]) {
    for (int i = 0; i < taille; i++) {
        if (strcmp(T[i].Nom, Nom) == 0) {
            printf("\t");
            return 1;
        }
    }
    return 0;
}

//ajouter un tache
void ajouterTache() {
    printf("\nEcrire les informations de la tache \n");

    printf("Nom : ");
    scanf(" %49[^\n]", t.Nom); 

    if (existeTache(t.Nom) == 1) {
        printf("La tache existe deja dans la liste\n");
    } else {
        printf("Priorite (1: Necessaire, 2: Important, 3: Ordinaire) : ");
        int choixPriorite;
        scanf("%d", &choixPriorite);
        switch (choixPriorite) {
            case 1:
                strcpy(t.Pr, "Necessaire");
                break;
            case 2:
                strcpy(t.Pr, "Important");
                break;
            case 3:
                strcpy(t.Pr, "Ordinaire");
                break;
            default:
                printf("Veuillez entrer une priorite valide !\n");
                return;
        }

        printf("Description : ");
        scanf(" %99[^\n]", t.Des); 

        printf("La date de creation: \n");
        printf("Jour : ");
        scanf("%d", &t.date_x.jour);
        if (t.date_x.jour < 1 || t.date_x.jour > 30) {
            printf("Le jour n'est pas valide\n");
            printf("Donner un nombre juste : ");
            scanf("%d", &t.date_x.jour);
        }

        printf("Mois : ");
        scanf("%d", &t.date_x.mois);
        if (t.date_x.mois < 1 || t.date_x.mois > 12) {
            printf("Le mois n'est pas valide\n");
            printf("Donner un nombre juste : ");
            scanf("%d", &t.date_x.mois);
        }

        printf("Annee : ");
        scanf("%d", &t.date_x.annee);
        if (t.date_x.annee < 1 || t.date_x.annee > 2023) {
            printf("L'annee n'est pas valide\n");
            printf("Donner un nombre juste : ");
            scanf("%d", &t.date_x.annee);
        }
        
        T[taille] = t;
        taille++;
        printf("\n Ajouter avec succes\n");
    }
}

// affichage de taches
void afficherTache(Tache T[], int taille) {
    if (taille == 0) {
        printf("AUCUNE TACHE EXISTE\n");
    } else {
        printf("La liste des Taches :\n\n");
        for (int j = 0; j < taille; j++) {
            printf("La tache %d : \n Nom : %s\n Priorite : %s\n Description : %s\n Date : %d/%d/%d \n\n", j + 1,
                   T[j].Nom, T[j].Pr, T[j].Des, T[j].date_x.jour, T[j].date_x.mois, T[j].date_x.annee);
        }
    }
}


// modification de la tache
int modfTache() {
    printf("Ecrire le Nom de la tache a modifier\n");
    printf("Nom : ");
    scanf(" %49[^\n]", t.Nom); 

    if (existeTache(t.Nom) == 1) {
        for (int i = 0; i < taille; i++) {
            if (strcmp(T[i].Nom, t.Nom) == 0) {
                int choix_1;
                do {
                    printf("\n");
                    printf("Tu veux changer quoi ?\n");
                    printf("1- Nom\n");
                    printf("2- Priorite\n");
                    printf("3- Description\n");
                    printf("4- Jour\n");
                    printf("5- Mois\n");
                    printf("6- Annee\n");
                    printf("7- Quitter la modification\n");
                    printf("\n Veuillez entrer votre choix : ");
                    scanf("%d", &choix_1);

                    switch (choix_1) {
                        case 1:
                            printf("NEW Nom : ");
                            scanf(" %49[^\n]", T[i].Nom); 
                            break;
                        case 2:
                            printf("NEW Priorite (1: Necessaire, 2: Important, 3: Ordinaire) : ");
                            int choixPriorite;
                            scanf("%d", &choixPriorite);
                            switch (choixPriorite) {
                                case 1:
                                    strcpy(T[i].Pr, "Necessaire");
                                    break;
                                case 2:
                                    strcpy(T[i].Pr, "Important");
                                    break;
                                case 3:
                                    strcpy(T[i].Pr, "Ordinaire");
                                    break;
                                default:
                                    printf("Veuillez entrer une priorite valide !\n");
                                    break;
                            }
                            break;
                        case 3:
                            printf("NEW Description :");
                            scanf(" %99[^\n]", T[i].Des); 
                            break;
                        case 4:
                            printf("NEW Jour : ");
                            scanf("%d", &T[i].date_x.jour);
                            break;
                        case 5:
                            printf("NEW Mois : ");
                            scanf("%d", &T[i].date_x.mois);
                            break;
                        case 6:
                            printf("NEW Annee : ");
                            scanf("%d", &T[i].date_x.annee);
                            break;
                        case 7:
                            printf("Quitter la modification\n");
                            break;
                        default:
                            printf("\nVeuillez entrer un choix valide!\n");
                            break;
                    }
                    printf("Modifier avec succes\n");
                } while (choix_1 != 7);
            }
        }
    }else {
        printf("Cette Tache n'existe pas\n");
    }
    return 0;
}


// supprission  de tache
void suppTache() {
	
    printf("Ecrire les informations de la tache \n");
    printf("Nom : ");
    scanf(" %49[^\n]", t.Nom); 

    if (existeTache(t.Nom) == 1) {
    	for (int i = 0; i < taille; i++) {
        if (strcmp(T[i].Nom, t.Nom) == 0) {

            for (int j = i; j < taille - 1; j++) {
                T[j] = T[j + 1];
            }
            taille--;
            printf("Supprimer avec succes\n");
            break;
        }
	}
    } else {
        printf("Cette Tache n'existe pas\n");
    }
}

void ordTache() {
    int choix_2;
    printf("Selon la Date :\n");
    printf("1- Ordre croissant\n");
    printf("2- Ordre décroissant\n\n");
    printf("Selon la Priorite :\n");
    printf("3- Ordre croissant\n");
    printf("4- Ordre décroissant\n");
    printf("\n Veuillez entrer votre choix : ");
    scanf("%d", &choix_2);

    for (int i = 0; i < taille; i++) {
        for (int j = i + 1; j < taille; j++) {

            switch (choix_2) {
                case 1:

                    if (T[i].date_x.annee > T[j].date_x.annee ||
                        (T[i].date_x.annee == T[j].date_x.annee && T[i].date_x.mois > T[j].date_x.mois) ||
                        (T[i].date_x.annee == T[j].date_x.annee && T[i].date_x.mois == T[j].date_x.mois &&
                         T[i].date_x.jour > T[j].date_x.jour)) {
                        Tache X = T[i];
                        T[i] = T[j];
                        T[j] = X;
                    }
                    break;
                case 2:

                    if (T[i].date_x.annee < T[j].date_x.annee ||
                        (T[i].date_x.annee == T[j].date_x.annee && T[i].date_x.mois < T[j].date_x.mois) ||
                        (T[i].date_x.annee == T[j].date_x.annee && T[i].date_x.mois == T[j].date_x.mois &&
                         T[i].date_x.jour < T[j].date_x.jour)) {
                        Tache X = T[i];
                        T[i] = T[j];
                        T[j] = X;
                    }
                    break;
                case 3:

                    if (strcmp(T[i].Pr, T[j].Pr) > 0) {
                        Tache X = T[i];
                        T[i] = T[j];
                        T[j] = X;
                    }
                    break;
                case 4:

                    if (strcmp(T[i].Pr, T[j].Pr) < 0) {
                        Tache X = T[i];
                        T[i] = T[j];
                        T[j] = X;
                    }
                    break;
                default:
                    printf("\nVeuillez entrer un choix valide!\n");
                    break;
            }
        }
    }
    printf("Ordonner avec succes\n");
    afficherTache(T, taille);
}


//fitrage des taches
void filTache() {

    int choix_3;
    printf("Tu veux filtrer par :\n");
    printf("1- Priorite\n");
    printf("2- Date\n\n");
    printf("\nVeuillez entrer votre choix : ");
    scanf("%d", &choix_3);

    switch (choix_3) {
        case 1:
            printf("Ecrire la priorite de la tache à afficher (Necessaire, Important, Ordinaire)\n");
            printf("Priorite : ");
            scanf(" %19[^\n]", t.Pr);
			 
            for (int i = 0; i < taille; i++) {
                if (strcmp(T[i].Pr, t.Pr) == 0) {
                    afficherTache(&T[i], 1);
                }
            }
            break;
        case 2:
            printf("Ecrire l'annee de la tache à afficher\n");
            printf("Annee et Moix ");
            scanf("%d %d", &t.date_x.annee, &t.date_x.mois);

            for (int i = 0; i < taille; i++) {
                if (T[i].date_x.annee == t.date_x.annee && T[i].date_x.mois == t.date_x.mois) {
                    afficherTache(&T[i], 1);
                }
            } 
            break;
        default:
            printf("\nVeuillez entrer un choix valide!\n");
            break;
    }
    printf("Filtrer avec succes\n");
}

void saveTaches() {
    FILE *fichier = fopen("Taches.txt", "w+");

    for (int i = 0; i < taille; i++) {
        fprintf(fichier, "La tache: \n Nom : %s\n Priorite : %s\n Description : %s\n Date : %d/%d/%d \n\n",
                T[i].Nom, T[i].Pr, T[i].Des, T[i].date_x.jour, T[i].date_x.mois, T[i].date_x.annee);
    }

    fclose(fichier);
    printf("Taches sauvegardees avec succes dans le fichier.\n");
}


void chargerTaches() {
    FILE *fichier = fopen("Taches.txt", "r+");
    
    if (fichier==NULL){
    	printf("AUCUNE TACHE EXISTE");
    	return;
	}else{
        while (fscanf(fichier, "La tache : \n Nom : %49[^\n] Priorite : %19[^\n] Description : %99[^\n] Date : %d/%d/%d\n",
                    t.Nom, t.Pr, t.Des, &t.date_x.jour, &t.date_x.mois, &t.date_x.annee) == 6) {
            T[taille] = t;
            taille++;
        }
	}

    fclose(fichier);
    printf("Taches chargees avec succes depuis le fichier.\n");
}


int main() {
    int choix = 0;
    chargerTaches();

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
                ajouterTache();
                break;
            case 2:
                afficherTache(T, taille);
                break;
            case 3:
                modfTache();
                break;
            case 4:
                suppTache();
                break;
            case 5:
                ordTache();
                break;
            case 6:
                filTache();
                break;
            case 7:
                saveTaches();
                printf("\nVous êtes hors du programme. Au revoir !\n");
                break;
            default:
                printf("\nVeuillez entrer un choix valide!\n");
                break;
        }
    }
    return 0;
}
