#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,j;
	float n,m[2][2],d;
	
	for(i=0;i<2;i++){

		for(j=0;j<2;j++){
		
			printf("digite o numero de [%d][%d]:",i,j);
			scanf("%f",&m[i][j]);
}
}
	printf("digite um numero:");
	scanf("%f",&n);
	
	for(i=0;i<2;i++){

		for(j=0;j<2;j++){
			
			d= m[i][j]/n;
			printf("%.2f  ",d);
}
	printf("\n");
}

}
