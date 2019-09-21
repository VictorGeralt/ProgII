#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream file("lab2.txt");
    if (file)
    {
        cout<<"aberto com sucesso";
    }else{
        cout<<"erro ao abrir";
    }

  return 0;
}