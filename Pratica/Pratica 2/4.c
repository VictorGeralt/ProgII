#include <stdio.h> 
#include <stdlib.h>

void dados (char carac[5][3], int idade[5]){
	int i;
	for(i=0;i<5;i++){
	printf("Digite seu sexo(F ou M):");
	scanf("%s",&carac[i][1]);
	
	printf("Digite a cor dos olhos(A-azul ou C-castanho):");
	scanf("%s",&carac[i][2]);
	
	printf("Digite a cor dos cabelos(L-louros, P-pretos, C-castanho):");
	scanf("%s",&carac[i][3]);

	printf("digite sua idade:");
	scanf("%d",&idade[i]);
}
}

void media(char carac[5][3], int idade[5]){
	
	float M=0;
	int i,j=0,S=0;

	for(i=0;i<5;i++){
		if(carac[i][2]=='C' && carac[i][3]=='P'){
			
			S=idade[i]+S;	
			j++;		
}				
}
M=S/j;	
	
printf("Media da idade das pessoas de olhos castanhos e cabelos pretos: %f\n",M);	
}
	
void maior(int idade[5]){
	int i,aux=0,N;
	for(i=0;i<5;i++){
		if(aux<idade[i]){
				aux=idade[i];
                	
}
}
printf("Maior idade entre os habitantes: %d\n",aux);
}

void quantidade(char carac[5][3], int idade[5]){
	
	int i,j=0;
	for(i=0;i<5;i++){
		if(carac[i][1]=='F'){		
			if(carac[i][2]=='A' && carac[i][3]=='L'){
				if(idade[i]>18 && idade[i]<35){
					j++;
}				
}		
}				
}
printf("Numero de individuos do sexo feminino cujo a idade esta entre 18 e 35 que tem olhos azuis e cabelos loiros: %d\n",j);
}


int main(){

 int idade[5];
 char carac[5][3];
 
 dados (carac,idade);
 media (carac,idade);
 maior (idade);
 quantidade (carac,idade);

return 0;
}
