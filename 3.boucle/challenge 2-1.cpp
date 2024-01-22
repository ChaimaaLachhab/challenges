#include <stdio.h>

int main (){
	int n, i, j;
	
	printf("entrer un nombre : ");
	scanf("%d", &n);
		
	for(i = 0; i < n; i++){
		
		for(j = (n-i); j <=n  ; j++){
			
		printf("*");
	 }
	 printf("\n");
     }
     return 0;
}
