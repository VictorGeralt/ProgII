#include <iostream>
#include "conta.hpp"

using namespace std;


int main(){
ContaBancaria x (1234, 99999);
ContaBancaria y (345,345, 1992);
ContaBancaria z;

cout<<"----------X Utilizou contrutor com 2 parametros------------\n";
cout<<"AG: "<<x.getAgencia()<<" ,CNT: "<<x.getContaBancaria()<<endl;
x.deposito( 100.0);
x.saque (50.0);
cout<< "SALDO: "<<x.getSaldo();

cout<<"----------Y Utilizou contrutor com 2 parametros------------\n";
cout<<"AG: "<<y.getAgencia()<<" ,CNT: "<<y.getContaBancaria()<<endl;
y.deposito( 100.0);
y.saque (50.0);
cout<< "SALDO: "<<y.getSaldo();

cout<<"----------Z Utilizou contrutor com 2 parametros------------\n";
cout<<"AG: "<<z.getAgencia()<<" ,CNT: "<<z.getContaBancaria()<<endl;
z.deposito( 100.0);
z.saque (50.0);
cout<< "SALDO: "<<z.getSaldo();

return EXIT_SUCCESS;
}