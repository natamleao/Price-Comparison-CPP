#include "../include/egg.h"
#include <iostream>

/*************************************************************** PUBLIC INTERFACE *****************************************************************/

Egg::Egg(int identifier, float price){
    this->setIdentifier(identifier);
    this->setPrice(price);
    this->setNext(NULL);
}

int Egg::getIdentifier(){return this->identifier;}
float Egg::getPrice(){return this->price;}
Egg *Egg::getNext(){return this->next;}

void Egg::setIdentifier(int identifier){
    if(identifier > 0){
        this->identifier = identifier;
    }
    else{
        std::cout << "ERRO em setIdentifier" << std::endl;
        std::cout << "O identificador é menor ou igual a zero" << std::endl;
        exit(EXIT_FAILURE);   
    }
}

void Egg::setPrice(float price){
    if(price > 0.0){
        this->price = price;
    }
    else{
        std::cout << "ERRO em setPrice" << std::endl;
        std::cout << "O preço é menor ou igual a zero" << std::endl;
        exit(EXIT_FAILURE);   
    }
}

void Egg::setNext(Egg *next){
    this->next = next;
}

/**************************************************************************************************************************************************/