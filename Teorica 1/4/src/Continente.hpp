#ifndef CONTINENTE_HPP
#define CONTINENTE_HPP
#include <iostream>
#include "Pais.hpp"
#include <string>


using namespace std;

class Continente
{
private:

    string nome;
    float dimensaoT;
    int populacaoT;
    float densidade;
    Pais vetPaises[100];
public:

    static int contPaises;

    Continente(string nome);

    void adicionarPais(Pais p);
    float dimensaoCont();
    int populacaoCont();
    float densidadeCont();
    Pais maiorPopulacao();
    Pais maiorDimensao();
    Pais menorPopulacao();
    Pais menorDimensao();
    float razaoTerritorial();

};



#endif