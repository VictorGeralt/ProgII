#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
	
	int x=1,y=1,z=0,i;
	
	for(i=0;i<n;i++){
		z=x+y;
		x=y;
		y=z;	
	}
	return z;
}


int main(){
	int n,x;
	printf("digite um numero:");
	scanf("%d",&n);
	
	printf("O %d numero da sequencia fibonacci: %d",n,fibo(n));
	
	return 0;
	
}
