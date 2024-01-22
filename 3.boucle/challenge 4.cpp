#include <stdio.h>

int main() {
    int n, sum = 0, max = 0;

    printf("ecrire un nombre positifs inférieurs a 100 et terminée par 0 : ");
    scanf("%d", &n);
    
    for(int i=1; i<n; i++) {
        if (n>0 && n<100){	
	    sum = n + sum ;
        }
        if (n > max) {
            max = n;
        }
    } 

    printf("La somme est : %d\n", sum);
    printf("Le maximum est : %d\n", max);

    return 0;
}

