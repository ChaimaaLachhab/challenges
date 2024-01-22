#include<stdio.h>

int main (){
	float C;
	float F;
	
	printf("donnez moi la T en F :");
	scanf("%f", &F);
	
	C = (F-32)/1.8;
	
	printf("la T en C est : %f", C);
	
	return 0;
}
