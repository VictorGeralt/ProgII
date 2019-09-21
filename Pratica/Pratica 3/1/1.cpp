#include <iostream>

using namespace std;

int main(){
    int op;
    float n1,n2;

    cout<<"Digite dois numeros: ";
    cin>>n1>>n2;

    cout<<"digite o operador(1 a 4)";
    cin>>op;

    switch (op)
    {
    case 1:
       
        cout<<"Media: "<<(n1+n2)/2<<endl;
        break;
    
    case 2:
        if(n1>n2){
        cout<<"Diferença: "<<n1-n2<<endl;
        }
        else{
        cout<<"Diferença: "<<n2-n1<<endl;
        }

        break;
    
    case 3:
    
        cout<<"Produto: "<<n1*n2<<endl;
        break;
    
    case 4:
       
        cout<<"Divisao: "<<n1/n2;
        break;
    default:
    "Operante invalido";
    
        break;
    }
    return 0;
}