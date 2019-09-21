#include <iostream>
#include "Pessoa.hpp"

int main(){
    Pessoa p,z;
    float peso,altura;
    char s;
    string nome;

    cout<<"Digite o nome: ";
    getline(cin,nome);
    p.setNome(nome);
    cout<< "Digite o sexo: ";
    cin >> s;
    p.setSexo(s);
    cout<<"Digite a altura: ";
    cin >> altura;
    p.setAltura(altura);
    cout<<"Digite o Peso: ";
    cin>> peso;
    p.setPeso(peso);

    p.imprimir();
}