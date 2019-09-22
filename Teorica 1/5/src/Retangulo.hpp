#ifndef RETANGULO_HPP
#define RETANGULO_HPP

using namespace std;

class Retangulo
{
public:
    
float largura, altura;

Retangulo();
Retangulo(float largura,float altura);

void solicitarDados();
void imprimirDados();
int validacaoDados();
float getLargura();
float getAltura();
void setLargura(float largura);
void setAltura(float altura);
void incrementarAltura();
void incrementarLargura();
void decrementarAltura();
void decrementarLargura();
float perimetro();
float area();

};

#endif