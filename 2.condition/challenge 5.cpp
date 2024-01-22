#include<stdio.h>

int main (){
	
	int a, b, sum;
	
	printf("donnez-moi deux nombre a et b:\n");
	scanf("%d %d", &a, &b);
	
	sum = a + b;
	
	if (a==b){
		printf("les deux nombre sont identiques, Le triple de la somme est : %d\n", 3 * sum);	
	} else { printf("la somme de deux valeurs est %d\n", sum);
	}
	
}
