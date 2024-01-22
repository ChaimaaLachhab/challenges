#include<stdio.h>

int main(){
	
	int a, b, c, D, x1, x2;
	
	printf("saisi a ");
	scanf("%d", &a);
	
	printf("saisi b ");
	scanf("%d", &b);
	
	printf("saisi c ");
	scanf("%d", &c);
	
    D = b*b - 4*a*c;
	
	if (D>0){
		x1 = (-b+D^(1/2))/2*a;
	    x2 = (-b-D^(1/2))/2*a;
		printf("parce que D>0 il y'a deux solutions possibles sont %d et %d", x1, x2);
	}else if(D==0){
		x1 = -b/2*a;
		printf("parce que D=0 il y'a un solution possible est %d", x1);
	} else if (D<0){
		x1 = (-b+(-1)^(1/2)*D^(1/2))/2*a;
		printf("pas de solutions reeles, parce que D<0 ");
	}
	
}
