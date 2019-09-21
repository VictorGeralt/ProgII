#ifndef PACIENTE_HPP
#define PACIENTE_HPP
#include <iostream>
#include <string>

using namespace std;

class Paciente{

 private:  
    string nome;
    float peso;
    char sexo;
    string endereco;
    string CPF;
 public:
    static int contPaciente;

    Paciente(string nome, float peso,char sexo,string endereco,string CPf);
    Paciente();

    void setNome(string nome);
    void setPeso(float peso);
    void setSexo(char sexo);
    void setEndereco(string endereco);
    void setCPF(string CPF);

    string getNome();
    float getPeso();
    char getSexo();
    string getEndereco();
    string getCPF();

    void imprimir();
};
#endif