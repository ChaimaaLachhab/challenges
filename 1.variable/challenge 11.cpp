#include<stdio.h>

int main(){
	
	int L,l;
	float cir;
	
	printf("ecrivez la longueur et la largeur du rectangle :");
	scanf("%d %d", &L, &l);
	
	cir = 2*(L+l);
	
	printf("la circonférence dn rectangle est : %f", cir);
	
	return 0;
}
