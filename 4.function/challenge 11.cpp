#include <stdio.h>

int Permuter(int a, int b){
	
	a = a + b;
	b = a - b;
	a = a - b;
	printf("avant la permutation: a = %d\n et b = %d \n",a,b);	
}

int main() {
	int a, b; 
	printf("donner a et b \n");
	scanf("%d %d", &a, &b);
	printf("apres la permutation: a =%d\n et b = %d ", a,b);
	Permuter(a,b);
	return 0;	
}
