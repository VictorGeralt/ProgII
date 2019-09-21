#include <iostream>
#include "calculadora.hpp"

using namespace std;

//getters
    double Calculadora::getN1(){
    return n1;   
    }

    double Calculadora::getN2(){
    return n2;
    }

    char Calculadora::getOperador(){
    return operador;
    }
//setters
    void Calculadora::setN1(double n1){
        this-> n1 = n1;
    }

    void Calculadora::setN2(double n2){
        this-> n2 = n2;
    }
    void Calculadora::setOperador(char operador){
        this-> operador = operador;
    }

double Calculadora::calcular(){

    switch (this->operador)
    {
    case '+':
        return this->n1+this->n2;
        break;
    
    case '-':
        return this->n1-this->n2;
        break;

    case '*':
        return this->n1*this->n2;
        break;

    case '/':
        if (n2 == 0)
        {
            return -1;
        }
        
        return this->n1/this->n2;
        break;

    default:
        return -1;
        break;
    }

}

void Calculadora::resultado(){
    if(this->calcular()==-1){
        cout<<"ERRO";
    }
    cout<<this->calcular();
}

    