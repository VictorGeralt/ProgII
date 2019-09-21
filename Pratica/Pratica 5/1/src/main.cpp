
#include <iostream>
#include "Pessoa.hpp"
#include <string>

using namespace std;

int main()
{
    Pessoa p,z;
    float peso,altura;
    char s;
    string irmaos[3],nome;
    cout <<"\nDigite o nome: ";
    getline(cin,nome);
    cout << "Digite o sexo: ";
    cin >> s;
    cout << "Digite a altura: ";
    cin >> altura;
    cout << "Digite o peso: ";
    cin >> peso;
    cout << "Digite o no do primeiro irmao: ";
    cin >>irmaos[0];
    cout << "Digite o no do segundo irmao: ";
    cin >>irmaos[1];
    cout << "Digite o no do terceiro irmao: ";
    cin >>irmaos[2];
    p.setNome(nome);
    p.setSexo(s);
    p.setAltura(altura);
    p.setPeso(peso);
    p.setIrmaos(irmaos);
    p.imprimirPessoa();
    p.imprimirIrmaos();


    return 0;
}