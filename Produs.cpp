#include "Produs.h"
#include "Carte.h"

#include<iostream>
#include<string>

Produs::Produs(const std::string &denumire, int pret) : denumire(denumire), pret(pret) {

}

/*Produs::Produs(const std::string &den, int p){
    this->denumire = den;
    this->pret = p;
}*/

const std::string &Produs::getDenumire() const {
    return denumire;
}

void Produs::setDenumire(const std::string &denumire) {
    Produs::denumire=denumire;
}

int Produs::getPret() const {
    return pret;
}

void Produs::setPret(int pret) {
    Produs::pret = pret;
}

void Produs::prezentareaProdusului() {
    std::cout<<"Denumirea produsului este "<<denumire<<" \n.";
    std::cout<<"Pretul produsului este "<<pret<<" \n";
}

void Produs::reducere() const {};

/*void Produs::anuntReducere() const {
    std::cout<<reducere()<<" cu denumirea "<<getDenumire()<<"este la reducere in urmatoarele zile!\n";
}*/

/*bool Produs::operator=(const Produs &rhs){
    if(this!= &rhs) {

        denumire.erase(denumire.begin(), denumire.end());
        this->pret = rhs.pret;
        this->denumire = rhs.denumire;
    }
}*/
Produs::Produs(const Produs& rhs) : Produs(rhs.denumire, rhs.pret){

}
Produs &Produs::operator=(const Produs &rhs) {
    if(this!=&rhs) {
        denumire = rhs.denumire;
        pret = rhs.pret;
    }
    return *this;
}
Produs::~Produs() = default;


