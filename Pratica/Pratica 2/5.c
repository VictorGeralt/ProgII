#include <stdio.h>
#include <stdlib.h>

float fat (int n){

float fat;
 
   for(fat=1;n>1;n=n-1){      
      fat=fat*n;
  }	
  
return fat;	
}

void e (int cont){

	int i;
	float aux=0;

	for(i=0;i<cont;i++){
	
	aux=aux+(1/fat(i));
	}
	
printf("e= %f",aux);
}


int main() {

int cont;
printf("Digite o numero de termos: ");
scanf("%d",&cont);

e(cont);  
    return 0;
  }
