#ifndef _JOGODAVELHA_HPP
#define _JOGODAVELHA_HPP


class JogoDaVelha
{
private:
    char tabuleiro[3][3];
public:
 int jogada=0;

    JogoDaVelha();

void exibirTabuleiro();
char fazerJogada(char tabuleiro[3][3],int x,int y);
int verificarVencedor();

};
#endif