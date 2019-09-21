#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    
    string str;
    

    cout<<"digite o conteudo do arquivo: ";
    
    ofstream file("lab2.txt");
    
    getline(cin,str);
    file<<str;

    return 0;
}