#include <iostream>
#include "pais.hpp"

int main(){
    string y[5];
    y[0]="Paraguai";
    y[1]="Uruguai";
    y[2]="Bolivia";
    y[3]="Chile";
    y[4]="Brasil";

    string z[5];
    z[0]="Argentina";
    z[1]="Bolivia";
    z[2]="Equador";
    z[3]="Uruguai";
    z[4]="Peru";



   Pais p1("Argentina","Buenos Aires",20.0,y);

   Pais p2("Brasil","Brasilia",85.0,z);

    cout << "Dados do Brasil" ;
    p2.dadosdosPaises(p2);
    cout << "\nFronteiras : ";
    p2.verificarFronteiras();
    cout << "\nDados da Argentina: ";
    p1.dadosdosPaises(p1);
    cout << "\nFronteiras : ";
    p1.verificarFronteiras();
    p2.verificarSePaisEIgual(p1);
 }