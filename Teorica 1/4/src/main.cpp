#include <iostream>
#include "Pais.hpp"
#include "Continente.hpp"
#include <string>

int main(){


    string nomeContinente;
    char operador;
    string nomePais;
    float dimensaoPais, populacaoPais;
    
    cout<<"Digite o nome do continente:";
    cin>>nomeContinente;
        
    Continente continente(nomeContinente);

        do
    {
          cout<<"\nNome do pais: ";
            cin>>nomePais;

            cout<<"\nDimensao do pais: ";
            cin>>dimensaoPais;
            
            cout<<"\nPopulaçao do pais: ";
            cin>>populacaoPais;
            
            Pais p(nomePais, dimensaoPais, populacaoPais);
            
            continente.adicionarPais(p);
            
            cout<<"\nAdicionar outro pais?  [s]im     [n]ão ";
            cin>>operador;

        } while (operador!= 'n');

    cout<<"\n\nDimensão total do continente: ";
    cout<<continente.dimensaoCont();

    cout<<"\n\nDimensão total do continente: ";
    cout<<continente.populacaoCont();

    cout<<"\n\nDensidade populacional do continente: ";
    cout<<continente.densidadeCont();

    cout<<"\n\nPais com maior população do continente: ";
    continente.maiorPopulacao().imprimirPais();
    
    cout<<"\n\nPais com maior dimensão do continente: ";
    continente.maiorDimensao().imprimirPais();
    
    cout<<"\n\nPais com menor população do continente: ";
    continente.menorPopulacao().imprimirPais();

    cout<<"\n\nPais com menor dimensão do continente: ";
    continente.menorDimensao().imprimirPais();

    cout<<"\n\nRazão do maior pais pelo menor: ";
    cout<<continente.razaoTerritorial();
}