#include <stdio.h>

int main (){
	
	char C;
	
		printf("saisi un caractere :");
	    scanf("%c", &C);
	    
	switch (C) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
	    case 'u':
	    	printf("le caractere est une voyelle");
		    break;
		default :
			printf("le caravtere n'est pas une voyelle");	
	}
	return 0;
	
}
