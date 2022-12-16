#include "Caiet.h"

#include<iostream>
#include <string>
#include <vector>

Caiet::Caiet(std::string denumire, int pret, std::string tip) :Produs(denumire, pret), tip(std::move(tip)){}

const std::string &Caiet::getTip() const {
    return tip;
}

void Caiet::setTip(std::string tip_) {
    Caiet::tip = std::move(tip_);
}

void Caiet::prezentareaProdusului() {
    std::cout<<"Denumirea produsului este "<<getDenumire()<<".\n";
    std::cout<<"Pretul produsului este "<<getPret()<<".\n";
    std::cout<<"Tipul produsului est "<<getTip()<<".\n";
}

void Caiet::reducere() const{
    std::cout<<"Caietul este la reducere\n";
}

Caiet::Caiet(const Caiet& rhs) : Produs(rhs.getDenumire(), rhs.getPret()), tip(rhs.tip){

}

Caiet &Caiet::operator=(Caiet rhs){
    Produs::operator=(rhs);
    std::swap(tip, rhs.tip);
    return *this;
}

void Caiet::Print(std::ostream &os) const {
    os<<"Produsul "<<denumire<<" "<<" cu pretul "<<pret<<" si tipul "<<tip;
}
