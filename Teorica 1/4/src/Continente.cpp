#include <iostream>
#include "Pais.hpp"
#include "Continente.hpp"


    int Continente::contPaises= 0;

    Continente::Continente(string nome){
        this->nome=nome;
    }

    void Continente::adicionarPais(Pais p){
    if(contPaises<100){
       this->vetPaises[contPaises]= p;
        contPaises++;
    }
    }

    float Continente::dimensaoCont(){
    for(int i= 0; i<contPaises;i++){
        dimensaoT+=vetPaises[i].getDimensao();
        
    }
    return dimensaoT;
    }

    int Continente::populacaoCont(){
    for(int i= 0; i<contPaises;i++){
        populacaoT+=vetPaises[i].getPopulacao();
        
    } 
    return populacaoT;       
    }

    float Continente::densidadeCont(){
        return (populacaoT/dimensaoT);
    }

    Pais  Continente::maiorPopulacao(){
        int aux=0;
        for(int i=0 ; i<contPaises;i++){
        if(vetPaises[aux].getPopulacao()<vetPaises[i].getPopulacao())    
        aux=i;
    }      
        
        return vetPaises[aux];
    }

    Pais  Continente::maiorDimensao(){
        int aux=0;
        for(int i= 0; i<contPaises;i++){
        if(vetPaises[aux].getDimensao()<vetPaises[i].getDimensao())    
        aux=i;
    }      
        
        return vetPaises[aux];
    }


    Pais  Continente::menorPopulacao(){
        int aux=0;
        for(int i= 0; i<contPaises;i++){
        if(vetPaises[aux].getPopulacao()>vetPaises[i].getPopulacao())    
        aux=i;
    }      
        
        return vetPaises[aux];
    }


    Pais  Continente::menorDimensao(){
        int aux=0;
        for(int i= 0; i<contPaises;i++){
        if(vetPaises[aux].getDimensao()>vetPaises[i].getDimensao())    
        aux=i;
    }      
        
        return vetPaises[aux];
    }


    float  Continente::razaoTerritorial(){
        return ((Continente::maiorDimensao().getDimensao())/(Continente::menorDimensao().getDimensao()));
    }
