#include <iostream>
#include "Taxi.hpp"
#include <string>

using namespace std;

void Taxi::setModelo(string modelo){
    this->modelo=modelo;
}
void Taxi::setMotor(string motor){
    this->motor=motor;
}
void Taxi::setFabricante(string fabricante){
    this->fabricante=fabricante;
}
void Taxi::setNome(string nome){
    this->nome=nome;
}
void Taxi::setInicio(float inicio){
    this->inicio=inicio;
}
void Taxi::setFinal(float final){
    this->final=final;
}


string Taxi::getModelo(){
    return modelo;
}
string Taxi::getMotor(){
    return motor;
}
string Taxi::getFabricante(){
    return fabricante;
}
string Taxi::getNome(){
    return nome;
}
float Taxi::getInicio(){
    return inicio;
}
float Taxi::getFinal(){
    return final;
}

float Taxi::valor(){
  return (final-inicio)*3.75;
}
