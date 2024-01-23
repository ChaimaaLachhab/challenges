#include <stdio.h>
int Max_2(int a,int b){
	if(a>b ){
        return a;	
	} else
		return b;
	} 	

int Max_4(int a,int b, int c, int d){
      if(Max_2(a,b)>Max_2(c,d)){
        return Max_2(a,b);
	  }else {
	    return Max_2(c,d);
	  }	
    }


int main(){
	
    int a,b,c,d;
	printf("ecrire quatre nombre a, b, c, d :");
	scanf("%d %d %d %d", &a, &b, &c, &d);
   printf("le max est  %d\n ",Max_4(a,b,c,d));
	
	return 0;
}
