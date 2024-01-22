#include<stdio.h>

int main (){
	
	int Mile;
	float Metre;
	
	printf("donnez moi la distance en Mile :");
	scanf("%d", &Mile);
	
	Metre = Mile / 1.609;
	
	printf("la distance en metre est : %f", Metre);
	
	return 0;
}
