#include<stdio.h>

int main(){
	
	float Mile;
	int Metre;
	
	printf("ecrire la distance en metre :");
	scanf("%d", &Metre);
	
	Mile = Metre * 1.609;
	
	printf("la distance en mile est : %f Mile", Mile);
	
	return 0;
}
