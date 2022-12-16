#include "Produs.h"
#include "Carte.h"

#include<iostream>
#include<string>

Produs::Produs(const std::string &denumire, int pret) : denumire(denumire), pret(pret) {

}

const std::string &Produs::getDenumire() const {
    return denumire;
}

void Produs::setDenumire(std::string &den_) {
    Produs::denumire=std::move(den_);
}

int Produs::getPret() const {
    return pret;
}

void Produs::setPret(int pret_) {
    Produs::pret = pret_;
}

void Produs::prezentareaProdusului() {
    std::cout<<"Denumirea produsului este "<<denumire<<" \n.";
    std::cout<<"Pretul produsului este "<<pret<<" \n";
}

void Produs::reducere() const {}

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


