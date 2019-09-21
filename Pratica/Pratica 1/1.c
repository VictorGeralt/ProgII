#include <stdio.h>
#include <stdlib.h>

int a (int v[]){
	int menor,i,aux;
	menor=v[0];
	
	for(i=0;i<10;i++){
	if(v[i]<menor){
	menor=v[i];
	aux=i;
	}

}
	return aux;

}

void b (int v[]){
	int i;
	
	for(i=0;i<10;i++){
	
	if(v[i]%2 == 0){
	printf("%d\n",v[i]);
	}
	}
}

int main(){
	
	int v[10],i,x;
	
	for(i=0;i<10;i++){
	
	printf("digite o vetor %d:",i);
	scanf("%d",&v[i]);

}
x=a (v);
b (v);

if (v[x]>0){
	printf("Nao tem numeros negativos");
}
else {
	printf("Numero: %d\nPosicao: %d",v[x],x);
}
	
	return 0;
}
