#include "Magazin.h"
#include "NuAvemAceastaCarte.h"
#include "NuAFostGasit.h"
#include<vector>
#include<memory>
#include "Caiet.h"

std::vector<std::shared_ptr<Produs>> Magazin::produse;

void Magazin::adaugaProduse(const std::shared_ptr<Produs> &prod) {
    Magazin::produse.push_back(prod);
}

void Magazin::afiseazaProduse() {
    for (std::shared_ptr<Produs> &x: produse) {
        x->prezentareaProdusului();
    }
}

/*void Magazin::cautaCarti() {
    for(std::shared_ptr<Produs> x:produse) {
        std::shared_ptr<Produs> y(nullptr);
        y = std::dynamic_pointer_cast<Carte>(x);
        if(y != nullptr) {
            std::cout<<"pentru obiectul cu denumirea "<<x->getDenumire()<<"s-a facut upcasting la obiectul carte";
        } else {
            std::cout<<"pentru obiectul cu denumirea "<<x->getDenumire()<<" nu s-a facut upcasting la obiectul carte";
        }
    }
}*/
std::vector<std::shared_ptr<Carte>> Magazin::gasesteToateCartile() {
    std::vector<std::shared_ptr<Carte>> carti;

    for(auto &prod : Magazin::produse) {
        auto &prod_ref = *prod;
        if(typeid(prod_ref) == typeid(Carte)) {
            auto carte_rez = std::dynamic_pointer_cast<Carte>(prod);
            carti.push_back(carte_rez);
        }
    }
    return carti;
}

std::shared_ptr<Produs> Magazin::gasesteProdusulDupaDenumire(const std::string& denumire) {
    for(auto &prod : Magazin::produse) {
        if (prod->getDenumire() == denumire) {
            return prod;
        }
    }
        throw NuAvemAceastaCarte();
}

std::vector<std::shared_ptr<Produs>> Magazin :: gasesteProdusulDupaPret(int &poz) {
    std::vector<std::shared_ptr<Produs>> rezultate;
    for(auto &produs : Magazin::produse) {
        if (produs->getPret() == poz) {
            rezultate.push_back(produs);
        }
    }
        if (!rezultate.empty()) return rezultate;
        throw NuAFostGasit();
}
