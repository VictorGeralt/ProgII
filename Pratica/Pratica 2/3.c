#include <stdio.h>
#include <stdlib.h>

int triangulo(int a, int b,int c){
if (a<b+c && b<a+c && c<b+a){
	return 1;
}
else {
return 0;
}
}

int tipo(int a, int b, int c){
	if(a==b && b==c)
{
		return 1;
}
	else if(a==b || b==c || a==c)
	{
		return 2;
}
	else if(a!=b && b!=c)
	{
		return 3;	
}
}

int main(){

int a,b,c ;

printf("Digite o tamanho do lado a:");
scanf("%d",&a);

printf("Digite o tamanho do lado b:");
scanf("%d",&b);

printf("Digite o tamanho do lado c:");
scanf("%d",&c);

if (triangulo(a,b,c)==1){
	
printf("E um triangulo");
	
switch(tipo(a,b,c)){

case 1:
	printf(" equilatero");
break;

case 2:
	printf(" isoceles");
break;

case 3:
	printf(" escaleno");
break;
}
}
else {
	printf("Nao um triangulo");
}

return 0;
}
