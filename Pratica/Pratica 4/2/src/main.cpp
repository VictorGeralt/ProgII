#include <iostream>
#include "Taxi.hpp"
#include <string>

using namespace std;

int main(){

string modelo,motor,fabricante,nome;
float inicio,final;
Taxi t;

cout<<"Digite o modelo do carro: ";
cin>>modelo;
cout<<"Digite a motorização do carro: ";
cin>>motor;
cout<<"Digite o fabricante do veiculo: ";
cin>>fabricante;
cout<<"Digite o nome do motorista: ";
cin>>nome;
cout<<"Digite a quilometragem inicial: ";
cin>>inicio;
cout<<"Digite a quilometragem final: ";
cin>>final;

t.setModelo(modelo);
t.setMotor(motor);
t.setFabricante(fabricante);
t.setNome(nome);
t.setInicio(inicio);
t.setFinal(final);

cout<<t.valor();
}