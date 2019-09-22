#include <iostream>
#include <string>
#include "Data.hpp"

using namespace std;

Data::Data(){
    time_t  agora_data = time(0);
    tm* atual = localtime(&agora_data);
    this->setDia(atual->tm_mday);
    this->setMes(atual->tm_mon+1);
    this->setAno(atual->tm_year+1900);
}

Data::Data(int dia,int mes,int ano){
    this->setMes(mes);
    this->setAno(ano);  
    this->setDia(dia);
}


int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}


void Data::setDia(int dia){

    if (this->getMes() == 2 && dia>28)
    {
      if (this->getAno()%4 == 0)
      {
         this->dia=29; 
      }else{
          this->dia=28;
      }
    }else if (dia>30)
    {
        if ((this->getMes() ==4)||(this->getMes() ==6)||(this->getMes() ==9)||(this->getMes() ==11))
        {
             this->dia=30;
        }
        else
        {
            this->dia=31;
        }
    }
    else 
    this-> dia=dia;
}
void Data::setMes(int mes){
    if(mes>12)
    {
        mes=12;
    }else if(mes<=0){
        mes=1;
    }
    this->mes=mes;
}
void Data::setAno(int ano){
    if(ano<1900)
    {
        ano=1900;
    }
    this->ano=ano;
}

string Data::tostring(){
    string datas;
    datas.append(to_string(this->getDia()));
    datas.append("/");
    datas.append(to_string(this->getMes()));
    datas.append("/");
    datas.append(to_string(this->getAno()));
 
    return datas;
}

void Data::proximodia(){
    if(((this->getDia()==30 && ((this->getMes() ==4)||(this->getMes() ==6)||(this->getMes() ==9)||(this->getMes() ==11))) || (this->getDia()==31)  || (this->getDia() == 29 && this->getMes() == 2 && this->getAno()%4 == 0 )|| (this->getDia() == 28 && this->getMes() == 2 ))){
    this-> setDia(1);
    if (this->getMes()==12)
    {
        this->setMes(1);
        this->setAno(getAno()+1);
    }
    else
    {
        this->setMes(getMes()+1);
    }
 }else{
   
        this->setDia(getDia()+1);
}
}