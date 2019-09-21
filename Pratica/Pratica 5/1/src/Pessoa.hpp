#ifndef __PESSOA_HPP
#define __PESSOA_HPP
#include <string>
using namespace std;
class Pessoa
{
    public:
        float peso,altura;
        char sexo;
        string nome;
        int cpf;
        string irmaos[3];
        

        void setNome (string nome);
        void setPeso (float peso);
        void setCPF (int cpf);
        void setSexo (char sexo);   
        void setAltura (float altura);
        void setIrmaos (string irmaos[]);
        
        
        string getNome ();    
        float getPeso ();
        int getCPF ();
        char getSexo ();   
        float getAltura ();
        

        bool equals(Pessoa x);
        void imprimirPessoa();
        void imprimirIrmaos();


};




#endif