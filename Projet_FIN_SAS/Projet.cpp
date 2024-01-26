#include <stdio.h>

typedef struct{
	int heur;
	int jour;
	int mois;
	int annee;
} Date;

typedef struct{
	
	char Nom[50];
	char Des[1000];
	Date date_x; //date de fair ce tache
	char Pr[10];
}Tache;



void afficherTache(Tache *T, int taille){
	
	if (taille == 0){
		printf ("la liste des Taches est vide");
	}else{
		printf("La liste des Taches :\n");
		for( int j=0 ; j<taille;j++){
			printf("La tache : \n Nom : %s \n Description : %s \n Date : %d-%d-%d-%d \n Priorite : %s", T[j].Nom, T[j].Des, T[j].date_x.heur, T[j].date_x.jour, T[j].date_x.mois, T[j].date_x.annee, T[j].Pr);
		}
	}
	
}


void ajouterTache(Tache **T, int *taille){

	Tache t;
	
	printf("Ecrire le nom d'une Tache : ");
	scanf("%s", t.Nom);
	
	printf("Ecrire la description de sa Tache : ");
	scanf("%s", t.Des);
	
	printf("Ecrire la date de création de sa Tache : \n");
	
	printf("Ecrire l'heur  : ");
	scanf("%d", &t.date_x.heur);
	
	printf("Ecrire le jour : ");
	scanf("%d", &t.date_x.jour);
	
	printf("Ecrire le moix : ");
	scanf("%d", &t.date_x.mois);
	
	printf("Ecrire l'annee : ");
	scanf("%d", &t.date_x.annee);
	
	printf("Ecrire la priorite de sa Tache : ");
	scanf("%s", t.Pr);
	
	(*T)[*taille]=t;
    (*taille)++;
		
}

int main(){
	
    int taille;
    Tache *T=NULL;
    int choix = 0;

    while (choix != 7) {
        printf("\n");
        printf("1- Ajouter une Tache\n");
        printf("2- Afficher la lise des Taches\n");
        printf("3- Modifier une Tache\n");
        printf("4- Supprimer une Tache\n");
        printf("5- Ordonner les Taches\n");
        printf("6- Filtrer les Taches\n");
        printf("7- Quitter le programme\n");
        printf("\n Veuillez entrer votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                //Ajouter une Tache
                ajouterTache(T, &taille);
                break;
            case 2:
                //Afficher la lise des Taches
                afficherTache(T, taille);
                break;
            case 3:
                //Modifier une Tache
                break;
            case 4:
                //Supprimer une Tache
                break;
            case 5:
                //Ordonner les Taches
                break;
            case 6:
                //Filtrer les Taches
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

