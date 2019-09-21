#include <iostream>
#include <string>
#include "Paciente.hpp"
#include "Consultorio.hpp"

using namespace std;

int main(){

    string nomeMed,nomePac;
    float pesoMed,pesoPac;
    char sexoMed,sexoPac;
    string enderecoMed,enderecoPac;
    string CPFMed, CPFPac;

    string nomeCon;
    string enderecoCon;
    string telefoneCon;

    int menu;
    char operador; 

    cout<<"Nome do Consultorio: ";
    cin.ignore();
    getline(cin,nomeCon);

    cout<<"Endereço do Consultorio: ";
    cin.ignore();
    getline(cin,enderecoCon);

    cout<<"Telefone do Consultorio: ";
    cin.ignore();
    getline(cin,telefoneCon);

    cout<<"Nome do Medico: ";
    cin.ignore();
    getline(cin,nomeMed);

    cout<<"Peso do Medico: ";
    cin>>pesoMed;
   
    cout<<"Sexo do Medico: ";
    cin>>sexoMed;

    cout<<"Endereço do Medico: ";
    cin.ignore();
    getline(cin,enderecoMed);

    cout<<"CPF do Medico: ";
    cin.ignore();
    getline(cin,CPFMed);

    Paciente medico (nomeMed, pesoMed, sexoMed, enderecoMed, CPFMed);
    Consultorio consultorio(nomeCon,enderecoCon,telefoneCon,medico);




    do{
    cout<<"[1]-Adicionar Paciente";
    cout<<"[2]-Remover Paciente";
    cout<<"[3]-Mostrar todos Pacientes";
    cout<<"[0]-Sair";
    cin>>menu;

    switch (menu)
    {
    case 1:
            cout<<"Adicionar um paciente?  [s]im     [n]ão ";
            cin>>operador;
        if(operador == 's'){
            do
            {
              cout<<"Nome do Paciente: ";
                cin.ignore();
                getline(cin,nomePac);

                cout<<"Peso do Paciente: ";
                cin>>pesoPac;

                cout<<"Sexo do Paciente: ";
                cin>>sexoPac;

                cout<<"Endereço do Paciente: ";
                cin.ignore();
                getline(cin,enderecoPac);

                cout<<"CPF do Paciente: ";
                cin.ignore();
                getline(cin,CPFPac);

                Paciente p (nomePac, pesoPac, sexoPac, enderecoPac, CPFPac);
                consultorio.cadastrarPaciente(p);

                cout<<"Adicionar outro paciente?  [s]im     [n]ão ";
                cin>>operador;

            } while (operador!= 'n');
        }  
        break;

    case 2:

        cout<<"Digite o CPF para remover o paciente:";
        cin>>CPFPac;
        if(consultorio.removerPaciente(CPFPac)==true){
        cout<<"Removido com sucesso";
    }else
        {
        cout<<"Cpf não encontrado";
        }
        
        break;
    
    case 3:

        cout<<"Pacientes:";
        consultorio.imprimirtodospacientes();
    

    }

}while (menu != 0);
}