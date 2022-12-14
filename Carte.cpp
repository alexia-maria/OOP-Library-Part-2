#include "Carte.h"

#include<iostream>
#include<string>
#include <utility>

Carte::Carte(const std::string &denumire, int pret, std::string gen) : Produs(denumire, pret), gen(std::move(gen)) {}

/*Carte::Carte(const std::string &den, int p, const std::string &g) : Produs(den, p) {
    this->gen = g;
}*/

const std::string &Carte::getGen() const {
    return gen;
}

[[maybe_unused]] void Carte::setGen(const std::string &gen_) {
    Carte::gen = gen_;
}

void Carte::prezentareaProdusului() {
    std::cout<<"Denumirea produsului este "<<getDenumire()<<".\n";
    std::cout<<"Pretul produsului este "<<getPret()<<".\n";
    std::cout<<"Genul produsului est "<<getGen()<<".\n";
}

void Carte::reducere() const{
    std::cout<<"Cartea este la reducere\n";
}

Carte::Carte(const Carte &rhs) : Produs(rhs.getDenumire(), rhs.getPret()), gen(rhs.gen) {

}

Carte &Carte::operator=(Carte rhs){
    Produs::operator=(rhs);
    std::swap(gen, rhs.gen);
   return *this;
}

void Carte::Print(std::ostream &os) const {
    os<<"Cartea "<<denumire<<" cu pretul "<<pret<<" si genul "<<gen;
}
