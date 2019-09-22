#include <iostream>
#include "JogoDaVelha.hpp"

using namespace std;

JogoDaVelha::JogoDaVelha(){
 for (int i=0; i < 3; i++)
    {
        for (int j=0; j<3; j++)
        {
            tabuleiro[i][j]='*';
        }
    }
}



void JogoDaVelha::exibirTabuleiro(){
    for (int i=0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<tabuleiro[i][j];
        }
        cout<<"\n";
    }
}

char JogoDaVelha::fazerJogada(char tabuleiro[3][3],int x,int y){

    if((this->tabuleiro[x-1][y-1] == 'X' ) || (this->tabuleiro[x-1][y-1] == 'O') ){
             cout<<"Casa ocupada,tente outra casa...";
    return 'F'; 
        
    }else{
        if(jogada%2==0){
        this->tabuleiro[x-1][y-1]='X';
        }else{
        this->tabuleiro[x-1][y-1]='O';
        }
        jogada++;
        
        return tabuleiro[3][3];
    }
}



int JogoDaVelha::verificarVencedor(){
    if(( tabuleiro[0][0]=='X' &&  tabuleiro[0][1]=='X' &&  tabuleiro[0][2]=='X') ||
       ( tabuleiro[1][0]=='X' &&  tabuleiro[1][1]=='X' &&  tabuleiro[1][2]=='X') ||
       ( tabuleiro[2][0]=='X' &&  tabuleiro[2][1]=='X' &&  tabuleiro[2][3]=='X') ||
       ( tabuleiro[0][0]=='X' &&  tabuleiro[1][0]=='X' &&  tabuleiro[2][0]=='X') ||
       ( tabuleiro[0][1]=='X' &&  tabuleiro[1][1]=='X' &&  tabuleiro[2][1]=='X') ||
       ( tabuleiro[0][2]=='X' &&  tabuleiro[1][2]=='X' &&  tabuleiro[2][2]=='X') ||
       ( tabuleiro[0][0]=='X' &&  tabuleiro[1][1]=='X' &&  tabuleiro[2][2]=='X') ||
       ( tabuleiro[0][2]=='X' &&  tabuleiro[1][1]=='X' &&  tabuleiro[2][0]=='X'))
    {
        cout<<"\n\n\nX ganhou\n";
        return 1;
    }else if(( tabuleiro[0][0]=='O' &&  tabuleiro[0][1]=='O' &&  tabuleiro[0][2]=='O') ||
             ( tabuleiro[1][0]=='O' &&  tabuleiro[1][1]=='O' &&  tabuleiro[1][2]=='O') ||
             ( tabuleiro[2][0]=='O' &&  tabuleiro[2][1]=='O' &&  tabuleiro[2][3]=='O') ||
             ( tabuleiro[0][0]=='O' &&  tabuleiro[1][0]=='O' &&  tabuleiro[2][0]=='O') ||
             ( tabuleiro[0][1]=='O' &&  tabuleiro[1][1]=='O' &&  tabuleiro[2][1]=='O') ||
             ( tabuleiro[0][2]=='O' &&  tabuleiro[1][2]=='O' &&  tabuleiro[2][2]=='O') ||
             ( tabuleiro[0][0]=='O' &&  tabuleiro[1][1]=='O' &&  tabuleiro[2][2]=='O') ||
             ( tabuleiro[0][2]=='O' &&  tabuleiro[1][1]=='O' &&  tabuleiro[2][0]=='O')){
                  cout<<"\n\n\nO ganhou\n";
                  return 2;
             }
             else if (jogada==9){             
                 cout<<"\n\n\nEmpate\n";
                 return 3;
}       
return 0;
}
