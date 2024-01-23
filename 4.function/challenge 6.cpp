#include <stdio.h>

int sum(int x, int y){
	 int som;
	som = x + y;
	
	printf("la somme est : %d \n", som);
}

int sous(int x, int y){
	 int sou;
	sou = x - y;
	
	printf("la soustraction est : %d \n", sou);
}

int mult(int x, int y){
	 int mul;
	mul = x * y;
	
	printf("la multiplication est : %d \n", mul);
}

int main(){
	
	int x, y;
	printf("donner les nombres x et y :");
	scanf("%d %d",& x, &y);
	sum(x,y);
	sous(x,y);
	mult(x,y);
	return 0;
	
} 
