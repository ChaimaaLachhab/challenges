#include <stdio.h>

int summ(int x, int y){
	 int som;
	som = x + y;
	
	printf("la somme est : %d ", som);
}

int main(){
	
	int x, y;
	printf("donner les nombres x et y :");
	scanf("%d %d",& x, &y);
	summ(x,y);
	return 0;
	
}
