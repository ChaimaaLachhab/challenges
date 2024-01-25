#include <stdio.h>
#include <math.h>

int carre(int n){
	int p = pow(n,2);
	return p;
}

void affiche_carre(int T[], int taille){
	printf("le tableau apres le carrer :\n");
	for(int i = 0; i<taille;i++){
	printf(" T[%d]=%d\n", i, carre(T[i]));
	}
}

void remlissage(int T[], int taille){
	for(int i=0; i<taille; i++){
    printf("T[%d]= ", i);
	scanf("%d", &T[i]);
	}

}

void affichage(int T[], int taille){
	printf("le tableau avant le carrer :\n");
	for(int i=0; i<taille; i++){
	printf("T[%d]=%d\n", i, T[i]);
	}
}

int main(){
	
	int taille;
	printf("donner la taille du tableau");
	scanf("%d", &taille);
	
	int T[taille];
	
	remlissage(T,taille);
	affichage(T,taille);
	affiche_carre(T,taille);
	
	return 0;
}
