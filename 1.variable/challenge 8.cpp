#include<stdio.h>
 int main(){
 	
 	int a, b, c, d;
 	float som, moy;
 	
 	printf("donnez moi les nombres a, b, c et d :");
 	scanf("%d %d %d %d", &a, &b, &c, &d);
 	
 	som = (a+b+c+d);
 	moy = som/4;
 	
 	printf("la somme est %f\n la moyenne est %f", som, moy);
 	
 	return 0;
 }
