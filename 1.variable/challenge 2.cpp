#include<stdio.h>

int main (){
	
	float C;
	int F;
	
	printf("ecrire la temp�rature en Fahrenheit :" );
	scanf("%d", &F);
	
	C = (F - 31)/1.8;
	
	printf("%d Fahrenheit est egale � %f Celsius", F, C);
	
	return 0;
	
}
