#include <stdio.h>
#include <stdlib.h>

int main(){
	
float n1,n2,n3,A,P,H;

printf("Digite 3 numeros:");
scanf("%f",&n1);
scanf("%f",&n2);
scanf("%f",&n3);

A=(n1+n2+n3)/3;

P=((n1*3)+(n2*3)+(n3*4))/10;

H=3/((1/n1)+(1/n2)+(1/n3));

printf("Media aritimetica: %f\nMedia ponderada: %f\nMedia harmonica: %f\n",A,P,H);
return 0;
}
