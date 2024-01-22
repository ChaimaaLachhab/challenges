#include<stdio.h>

int main (){
	
	int age;
	
	printf("donnez-moi l'age d'un enfant :");
	scanf("%d", &age);
	
	if(age<=7 && age>=6){
		printf("l'enfant est dans la categorie poussin\n");
	}else if(age<=9 && age>=8){
		printf("l'enfant est dans la categorie pupille\n");
	}else if(age<=11 && age>=10){
		printf("l'enfant est dans la categorie minime\n");
	}else if(age>=12){
		printf("l'enfant est dans la categorie cadet\n");
	} else { printf("l'enfant n'estpas dans la categorie poussin.");
}
	return 0;
}
