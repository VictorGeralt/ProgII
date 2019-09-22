#include <iostream>
#include "Retangulo.hpp"

using namespace std;

int main(){

float largura=0, altura=0;

Retangulo def(largura,altura);
 def.imprimirDados();

 cout<<"\n\nINCREMENTAR:\n";
 def.incrementarAltura();
 def.incrementarLargura();

 def.imprimirDados();

 cout<<"\n\nDECREMENTAR:\n";
 def.decrementarAltura();
 def.decrementarLargura();

 def.imprimirDados();

Retangulo ret;


ret.solicitarDados();
while(ret.validacaoDados()==0){
    ret.solicitarDados();
}
ret.perimetro();
ret.area();


 ret.imprimirDados();

 cout<<"\n\nINCREMENTAR ALTURA:\n";

 ret.incrementarAltura();
 ret.incrementarLargura();

 ret.imprimirDados();

cout<<"\n\nDECREMENTAR ALTURA:\n";

 ret.decrementarAltura();
 ret.decrementarLargura();


 ret.imprimirDados();

 
    return 0;
}