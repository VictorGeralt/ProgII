#include "Paciente.hpp"
#include "Consultorio.hpp"
#include <iostream>

using namespace std;     
    
    Consultorio::Consultorio(){

}

        Consultorio::Consultorio(string nome,string endereco,string telefone,Paciente medico){
        setNome(nome);
        setEndereco(endereco);
        setTelefone(telefone);
        setMedico(medico);
}

   void Consultorio::setNome(string nome){
       this->nome=nome;
   }
   void Consultorio::setEndereco(string endereco){
       this->endereco=endereco;
   }
   void Consultorio::setTelefone(string telefone){
       this->telefone=telefone;
   }
   void Consultorio::setMedico(Paciente medico){
       this->medico=medico;
   }

   string Consultorio::getNome(){
       return nome;
   }
   string Consultorio::getEndereco(){
       return endereco;
   }
   string Consultorio::getTelefone(){
       return telefone;
   }
   Paciente Consultorio::getMedico(){
       return medico;
   }

   void Consultorio::cadastrarPaciente(Paciente p){
       if(contPaciente<100){
           this->vetPacientes[contPaciente]= p;
            contPaciente++;
       }
   }

   bool Consultorio::removerPaciente(string CPF){
       for(int i=0;i<contPaciente;i++){
           if (CPF == vetPacientes[contPaciente].getCPF())
           {
                void setNome();
                void setPeso();
                void setSexo();
                void setEndereco();
                void setCPF();
                contPaciente--;
                return true;
                }
  }return false;
   }

   void Consultorio::imprimirtodospacientes(){
        for(int i=0;i<contPaciente;i++){
            vetPacientes[contPaciente].imprimir();
   }
   }

