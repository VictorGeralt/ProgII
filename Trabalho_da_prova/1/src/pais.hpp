#include <iostream>
#ifndef __PAIS_HPP
#define __PAIS_HPP
#include <string>

using namespace std;

class Pais{
    public:

        string nome;
        string nomeCapital;
        string listaPais[5];
        float dimensao;
        static int cont;

        Pais(string n,string nc, double sim, string lp[5]);
        Pais();
        int getCont();

//getters
    string getNome();
    string getNomeCapital();
    int getDimensao();

//setters
    void setNome(string nome);
    void setNomeCapital(string nomecapital);
    void setDimensao(int dimensao);
    void setListaPais(string listaPais[]);


    void verificarSePaisEIgual(Pais x);

    void verificarFronteiras();

    void dadosdosPaises(Pais x);
};
#endif
