#include <iostream>
#include "conta.hpp"
#include <vector>

using namespace std;


int main(){

ContaCorrente vet[5];
string nome;
int CPF;
float saldo;

for (int i=0; i<5; i++)
{
    cout<<"Digite o seu nome: ";
    cin>>nome;
    vet[i].setNome(nome);
    cout<<"Digite o seu CPF: ";
    cin>>CPF;
    vet[i].setCPF(CPF);
    cout<<"Digite o saldo: ";
    cin>>saldo;
    vet[i].setSaldo(saldo);
};

cout<<"\nMedia dos saldos: "<<vet[5].calcularMediaConta(vet);
vet[5].ImprimirPessoaComMaiorSaldo(vet);
vet[5].ImprimirPessoaComMenosSaldo(vet);


return 0;
}