#include <stdio.h>

int main() {
	
	int F, C;
	
	printf("donnez-moi la température en Fahrenheit :");
	scanf("%d", &F);
	
	C = (F-32)/1.8;
	
	printf("la temperature en degre celsius est  : %d\n", C);
	
	if (C<0){
		printf("Il fait tres froid");
	} else if (C>0 && C<20){
		printf("Il fait froid");
	}else if (C>20 && C<30){
		printf("Il fait chaud");
	}else { printf("Il fait tres chaud");
	}
	
	return 0;
	}

