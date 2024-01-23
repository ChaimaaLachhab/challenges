#include <stdio.h>

int estImpair(int n){
	if (n%2!=0){
		printf("le nombre est impaire");
	} else {
		printf("le nombre est paire ");
	}
}

int main(){
	
	int n;
	printf("Ecrivez un nombre :");
	scanf("%d", &n);
	estImpair(n);
	return 0;
	
}
