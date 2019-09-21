#ifndef CONSULTORIO_HPP
#define CONSULTORIO_HPP
#include <string>
#include "Paciente.hpp"

using namespace std;

class Consultorio{

 private:
    string nome;
    string endereco;
    string telefone;
    Paciente medico;
    Paciente vetPacientes[100];
 public: 
    static int contPaciente;
    
   Consultorio();
   Consultorio(string nome,string endereco,string telefone,Paciente medico);
        
   
   void setNome(string nome);
   void setEndereco(string endereco);
   void setTelefone(string telefone);
   void setMedico(Paciente medico);

   string getNome();
   string getEndereco();
   string getTelefone();
   Paciente getMedico();

   void cadastrarPaciente(Paciente p);
   bool removerPaciente(string CPF);
   void imprimirtodospacientes();

};
#endif