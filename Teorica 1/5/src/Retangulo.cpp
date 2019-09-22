#include <iostream>
#include "Retangulo.hpp"

using namespace std;

Retangulo::Retangulo(){

    this->altura=0;
    this->largura=0;
    
}

Retangulo::Retangulo(float largura,float altura){
    this->altura=largura+5;
    this->largura=altura+10;

}

void  Retangulo::solicitarDados(){
    float largura;
    cout<<"Digite a largura:";
    cin>>largura;
    Retangulo::setLargura(largura);  
    
    float altura;
    cout<<"Digite a altura:";
    cin>>altura;
    Retangulo::setAltura(altura);


}
void  Retangulo::imprimirDados(){
    cout<<"\nRetangulo:";
    cout<<"\nLargura: "<<Retangulo::getLargura();
    cout<<"\nAltura: "<<Retangulo::getAltura();
    cout<<"\nPerimetro: "<<Retangulo::perimetro();
    cout<<"\nArea: "<<Retangulo::area()<<"\n\n";

}
int Retangulo::validacaoDados(){
    char op;
    cout<<"\nRetangulo Solicitado:";
    cout<<"\nLargura: "<<Retangulo::getLargura();
    cout<<"\nAltura: "<<Retangulo::getAltura();
    cout<<"\n--------------------------";
    cout<<"\nEsses são os dados corretos?  [S]im   [N]ão \n";
    cin>>op;
    if(op=='s'){
        return 1;
    }else{
        return 0;
    }

}
float Retangulo:: getLargura(){
    return this->largura;

}
float Retangulo:: getAltura(){
    return this->altura;

}
void  Retangulo::setLargura(float largura){
    this->largura=largura;

}
void  Retangulo::setAltura(float altura){
    this->altura=altura;

}
void  Retangulo::incrementarAltura(){
    this->altura+=1;

}
void  Retangulo::incrementarLargura(){
    this->largura+=1;

}
void  Retangulo::decrementarAltura(){
    this->altura-=1;

}
void  Retangulo::decrementarLargura(){
    this->largura-=1;

}
float Retangulo:: perimetro(){
    return ((this->altura*2)+(this->largura*2));

}
float Retangulo:: area(){
    return ((this->largura)*(this->altura));

}
