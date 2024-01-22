#include<stdio.h>

int main (){
	int a , b;
	float sum1, sum2, sum3, sum4, sum5;
	
	printf("donnez moi a et b");
	scanf("%d %d", &a, &b);

	sum1 = a+b;
    sum2 = a-b;
    sum3 = a*b;
	sum4 = a/b;
	sum5 = a%b;
	
	printf("Addition %f\n Subtraction %f\n Multiplication %f\n Division %f\n Modulus %f\n", sum1, sum2, sum3, sum4, sum5);
	return 0;
	 
}
