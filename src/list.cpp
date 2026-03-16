#include "../include/list.h"
#include <iostream>
#include <iomanip>

/*************************************************************** PUBLIC INTERFACE *****************************************************************/

List::List(){
    this->setSize(0);
    this->setBegin(nullptr);
}

size_t List::getSize(){return this->size;}
Egg *List::getBegin(){return this->begin;}  

void List::incrementSize(){this->size++;}
void List::decrementSize(){this->size--;} 

void List::setSize(size_t size){this->size = size;}
void List::setBegin(Egg *egg){this->begin = egg;}

Egg *List::searchItem(int identifier, int *f){
    Egg *aux = this->getBegin();

    while(aux != nullptr){
        if(aux->getIdentifier() == identifier){
            (*f) = 1;

            return aux;
        }
        aux = aux->getNext();
    }

    return nullptr;
}

void List::add(int identifier, float price){
    Egg *eggAlloc = new Egg(identifier, price);

    eggAlloc->setNext(this->getBegin());

    this->setBegin(eggAlloc);

    this->incrementSize();
}

void List::updateItemIdentifier(Egg *egg, int newIdentifier){
    egg->setIdentifier(newIdentifier);
}

void List::updateItemPrice(Egg *egg, float newPrice){
    egg->setPrice(newPrice);
}

void List::updateItem(Egg *egg, int newIdentifier, int newPrice){
    egg->setIdentifier(newIdentifier);
    egg->setPrice(newPrice);
}

void List::removeItem(int identifier, int *f){
    Egg *previous = nullptr;
    Egg *actual = this->getBegin();

    while(actual != nullptr && actual->getIdentifier() != identifier){
        previous = actual;
        actual = actual->getNext();
    }

    if(actual == nullptr){
        (*f) = 0;

        return;
    }

    (*f) = 1;

    if(previous == nullptr) this->setBegin(actual->getNext());
    else previous->setNext(actual->getNext());

    this->decrementSize();
    free(actual);
}

void List::print(){
    int count = 1;
    Egg *aux = this->getBegin();

    while(aux != nullptr){
        std::cout << "+ ITEM " << count << " - IDENTIFICADOR: " << aux->getIdentifier() << " | PREÇO: " << aux->getPrice() << std::fixed << std::setprecision(2) << std::endl;
        std::cout << "+--------------------------------------------------------------------------+" << std::endl;
        aux = aux->getNext();
        count++;
    }
}

float List::averagePrice(){
    if(this->getSize() == 0)
        return 0.0;

    float sumEggPrices = 0.0;

    Egg *auxiliary = this->getBegin();

    while(auxiliary != nullptr){
        sumEggPrices += auxiliary->getPrice();
        auxiliary = auxiliary->getNext();
    }

    return (sumEggPrices / this->getSize());
}

void List::searchPrice(){
    float priceHedging = this->averagePrice();
    Egg *auxiliary = this->getBegin();

    while(auxiliary != nullptr){

        if(auxiliary->getPrice() < (priceHedging / 2))
            std::cout << "+ OVO DE PÁSCOA " << auxiliary->getIdentifier() << ": TALVEZ DÊ PARA COMPRAR" << std::endl;

        else if(auxiliary->getPrice() <= priceHedging)
            std::cout << "+ OVO DE PÁSCOA " << auxiliary->getIdentifier() << ": ACHO QUE É MELHOR COMPRAR O VALOR EM BARRA DE CHOCOLATE" << std::endl;

        else
            std::cout << "+ OVO DE PÁSCOA " << auxiliary->getIdentifier() << ": MELHOR COMPRAR UMA BARRA DE OURO COM ESSE DINHEIRO" << std::endl;

        std::cout << "+--------------------------------------------------------------------------+" << std::endl;

        auxiliary = auxiliary->getNext();
    }
}

List::~List(){
    Egg *actual = this->getBegin();

    while(actual != nullptr){
        Egg *next = actual->getNext();
        delete actual;
        actual = next;
    }

    this->setBegin(nullptr);
    this->setSize(0);
}

/**************************************************************************************************************************************************/