
#include <iostream>
#include "Pessoa.hpp"

using namespace std;
        //Setters
        void Pessoa::setNome (string nome){
            this->nome = nome;
        }
        void Pessoa::setPeso (float peso){
            this->peso = peso;
        }
          void Pessoa::setCPF (int cpf){
            this->cpf = cpf;
        }
        void Pessoa::setSexo (char sexo){
            this->sexo = sexo;
        }
         void Pessoa::setAltura (float altura){
            this->altura = altura;
        }


        string Pessoa::getNome (){
            return nome;
        }
        float Pessoa:: getPeso (){
            return peso;
        }
        int Pessoa::getCPF (){
            return cpf;
        }
        char Pessoa::getSexo (){
            return sexo;
        }
        float Pessoa:: getAltura (){
            return altura;
        }

        
        void Pessoa::setIrmaos (string irmaos[]){
            for (size_t i = 0; i < 3; i++)
            {
                this->irmaos[i] = irmaos[i];
            }
            
        }
                
        bool Pessoa::equals(Pessoa pessoa){
            return(this->getCPF() == pessoa.getCPF());
        }

        void Pessoa::imprimirPessoa(){
            cout << "---------------------------\n" <<endl;
            cout << "Nome: " << nome<<endl;
            cout << "Sexo: " << sexo<<endl;
            cout << "Peso: "<< peso<<endl;
            cout << "Altura: "<< altura<<endl;

        }
        void Pessoa::imprimirIrmaos(){
            cout << "Lista de irmaos"<<endl;
            for (size_t i = 0; i < 3; i++)
            {
                cout << this->irmaos[i]<<endl;
            }
            

        }