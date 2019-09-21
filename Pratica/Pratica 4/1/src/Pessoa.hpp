#include <iostream>
#ifndef _PESSOA_HPP
#define _PESSOA_HPP

using namespace std;

class Pessoa
{
        public:
            float peso, altura;
            char  sexo;
            string nome;

            void setNome(string nome);
            void setPeso(float peso);
            void setSexo(char sexo);
            void setAltura(float altura);

            string getNome();
            float getPeso();
            char getSexo();
            float getAltura();

            void imprimir();
};

#endif