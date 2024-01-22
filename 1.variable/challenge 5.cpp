#include<stdio.h>

int main(){
	
	int F;
	float C;
	
	printf("donnez moi la temperature en Fahrenheit :");
	scanf("%d", &F);
	
	C = (F - 32) / 1.8;
	
	printf(" la tempurature en degre Celsius est : %f celsius\n", C);
	
	if (C<0) {
		printf("il fait tres froid");
	}else if (C>0 && C<20) {
		printf("il fait froid");
	}else if (C>20 && C<30){
		printf("il fait chaud");
	}else { printf("il fait tres chaud");
	}
	
	
	return 0;
}
