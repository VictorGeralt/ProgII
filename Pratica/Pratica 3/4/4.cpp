#include <iostream>
#include <fstream>

using namespace std;

int main(){

int linha=0;
char c;
ifstream file("lab2.txt");

while (file.get(c))
{
  
    if (c=='\n')
    {
      linha++; 
    }
   
}
cout<<"Linhas: "<<linha;
}