#include<stdio.h>

int main (){
	
	int x1, y1; //M(x1,y1)
	int x2, y2; //N(x2,y2)
	int D;
	
	printf("donnez moi  les coordonnees de M(x1,y1):");
	scanf("%d %d", &x1, &y1);
	
	printf("donnez moi  les coordonnees de N(x1,y1):");
	scanf("%d %d", &x2, &y2);
	
	D = ((x1-x1)^2 + (y2-y1)^2)^1/2;
	
	printf("la distance entre M et N est %d ", D);
	
	return 0;
}
