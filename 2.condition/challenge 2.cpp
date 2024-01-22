#include <stdio.h>

int main(){
	
	int n;
	
	printf("Ecrivez un nombre :");
	scanf("%d", &n);

	if (n & 1){
		printf("le nombre est impaire");
	} else {
		printf("le nombre est paire ");
	}
	
	return 0;
}
