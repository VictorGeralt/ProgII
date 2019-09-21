#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a,b,c;

    cout<<"Digite tres numeros: ";
    cin>>a>>b>>c;

    if(a>0){
        cout<<sqrt(a)<<"\n";
    }else
    {
        cout<<a*a<<"\n";
    }
    

    if(b>10 && b<100){
        cout<<"_Número entre 10 e 100. Intervalo permitido_\n";
    }

    if(c>b){
        cout<<c-b<<"\n";
    }else{
        cout<<b+c<<"\n";
    }

    return 0;
}