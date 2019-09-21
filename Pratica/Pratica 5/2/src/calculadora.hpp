#include <iostream>
#ifndef __CALCULADORA_HPP
#define __CALCULADORA_HPP

using namespace std;

class Calculadora{
    public:

        double n1,n2;
        char operador;

//getter
    double getN1();
    double getN2();
    char getOperador();

//setter
    void setN1(double n1);
    void setN2(double n2);
    void setOperador(char operador);   

    double calcular();
    void resultado();

    Calculadora(double n1,char operador,double n2){
    this->setN1(n1);
    this->setN2(n2);
    this->setOperador(operador);

    }
};
#endif