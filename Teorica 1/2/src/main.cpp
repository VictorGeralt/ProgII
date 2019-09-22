#include <iostream>
#include <string>
#include "Data.hpp"

using namespace std;

int main()
{
    int dia,mes,ano;

    cout<<"Digite o dia:";
    cin>>dia;
    cout<<"Digite o mes:";
    cin>>mes;
    cout<<"Digite o ano:";
    cin>>ano;

    Data a(dia,mes,ano);

    cout<<a.tostring()<<endl;
    a.proximodia();
    cout<<a.tostring()<<endl;
  
    Data b = Data();

    cout<<b.tostring()<<endl;
    b.proximodia();
    cout<<b.tostring()<<endl;
}
