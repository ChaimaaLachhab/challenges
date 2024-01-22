#include<stdio.h>

int main (){
	
	float C;
	int F;
	
	printf("ecrire la température en Fahrenheit :" );
	scanf("%d", &F);
	
	C = (F - 31)/1.8;
	
	printf("%d Fahrenheit est egale à %f Celsius", F, C);
	
	return 0;
	
}
