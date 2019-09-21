#include <iostream>
#include <string>
#ifndef TAXI_HPP
#define TAXI_HPP


using namespace std;

class Taxi
{
    
public:

string modelo;
string motor;
string fabricante;
string nome;
float inicio;
float final;

void setModelo(string modelo);
void setMotor(string motor);
void setFabricante(string fabricante);
void setNome(string nome);
void setInicio(float inicio);
void setFinal(float final);


string getModelo();
string getMotor();
string getFabricante();
string getNome();
float getInicio();
float getFinal();

float valor();
};

#endif