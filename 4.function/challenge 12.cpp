#include <stdio.h>


void Inserer(int T[], int taille){
	printf("denner le nombre du tableau :\n");
	for(int i=0; i<taille; i++){
	scanf("%d", &T[i]);
	}

}

void affichage(int T[], int taille){
	printf("le tableau :\n");
	for(int i=0; i<taille; i++){
	printf("T[%d]=%d\n", i, T[i]);
	}
}

int main(){
	
	int taille;
	printf("donner la taille du tableau\n");
	scanf("%d", &taille);
	
	int T[taille];
	
	Inserer(T,taille);
	affichage(T,taille);
	
	return 0;
}
