#include <iostream>
#include "JogoDaVelha.hpp"


using namespace std;

int main(){
    JogoDaVelha jogo;
    char tabuleiro[3][3];
    int x,y; 
    

    cout<<"Jogo da velha\n\n";
   

    for (int i = 0; i < 9; i++)
    {
        jogo.exibirTabuleiro();
        cout<<"digite a linha e a coluna da sua jogada ('x y'): ";   
        cin>>x>>y;

        
        while(jogo.fazerJogada(tabuleiro, x, y)=='F'){
            cout<<"digite a linha e a coluna da sua jogada ('x y'): ";
            cin>>x>>y;
        }

        if(jogo.verificarVencedor() != 0){
            jogo.exibirTabuleiro();
            return 0;
        }

        
    }
    
    return 0;
}