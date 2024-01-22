#include <stdio.h>
#include <stdbool.h>

int main (){
	
	int n, i;
	
	printf("donner un nombre : ");
	scanf("%d", &n);
	
	if (n<=1){
		printf("%d n'est pas valide\n", n);
		
	}else{

bool NT= true;

	for (i=2; i<=n/2; i++){
		if(n/i==1 || n/i==n){
			NT= false;
			break;
	    }
}
		if (NT==true){

			printf("%d est un nombre premier\n", n);
		} else {
			printf("%d n'est pas un nombre premier\n", n);
		}
	}
	return 0; 
}




