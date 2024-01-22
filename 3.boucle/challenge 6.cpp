#include <stdio.h>

int main(){
	
	int n, p, i;
	
	printf("donner un nombre :");
	scanf("%d", &n);
	
	for (p=2; p<n; p++){
    printf("Les nombres premiers entre 2 et %d sont :\n", n);
    for (p = 2; p <= n; p++) {
        int Premier = 1; 
        for (i = 2; i * i <= p; i++) {
            if (p % i == 0) {
                Premier = 0; 
                break;
            }
        }
        if (Premier) {
            printf("%d ", p);
        }
    }

    return 0;
}
}
