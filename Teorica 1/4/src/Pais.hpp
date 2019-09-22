#ifndef PAIS__HPP
#define PAIS__HPP
#include <iostream>
#include <string>

using namespace std;

class Pais
{
private:
    string nome;
    float dimensao;
    int populacao;

public:

Pais();
Pais(string nome,float dimensao,int populacao);

    string getNome();
    float  getDimensao();
    int  getPopulacao();
    void imprimirPais();
};


#endif