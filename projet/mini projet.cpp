#include <stdio.h>

void remplie(int T[][2], int taille){
	printf("ecrire le code de produit et sa quantité");
	for(int i=0; i<taille;i ++){
		for (int j=0; j<2; j++){
			scanf("%d", &T[i][j]);
		}
	}
}

void affichage(int T[][2], int taille){
	printf("le tableau :\n");
	for(int i=0; i<taille;i ++){
		
        printf("le code de produit = %d, sa quantite = %d\n", T[i][0], T[i][1]);
		
	}
}


void supp(int T[][2], int taille, int position) {
    if (position < 0 || position >= taille) {
        printf("Suppression impossible\n");
    } else {
        for (int i = position; i < taille - 1; i++) {
            T[i][0] = T[i + 1][0];
            T[i][1] = T[i + 1][1];
        }
        taille--;
    }
}
	
int main(){
	
	int taille, position;
	printf("donner la taille du tableau\n");
	scanf("%d", &taille);
	int T[taille][2];
	remplie(T,taille);
	affichage(T,taille);
	supp(T, taille, position);
	
	return 0;
}
    


