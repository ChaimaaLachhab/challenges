#include<stdio.h>

int main (){
	
	int r; //rayon du cercle
	float cir;
	printf("donnez moi le rayon du cercle :");
	scanf("%d", &r);
	
	cir = 2*3.14*r;
	
	printf(" la circonférence d'un cercle est %f", cir);
	
	return 0;
}
