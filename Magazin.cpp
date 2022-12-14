#include "Magazin.h"
#include "NuAvemAceastaCarte.h"
#include "NuAvemAcestCaiet.h"
#include "AiciAvemOCarte.h"
#include "DepasesteLimitele.h"
#include "NuEsteTipulPotrivit.h"
#include<vector>
#include<memory>
#include "Caiet.h"

std::vector<std::shared_ptr<Produs>> Magazin::produse;
//std::vector<Carte> Magazin::carti;
//std::shared_ptr<Produs> prod(new Produs());
//vectorul static pets de tipul pointer la Pet


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
        if(typeid(*prod) == typeid(Carte)) {
            auto carte = std::dynamic_pointer_cast<Carte>(prod);
            carti.push_back(carte);
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

std::shared_ptr<Produs> Magazin::gasesteCaietulDupaIndice(int poz) {
    int k = -1;
    for(auto &prod :Magazin::produse) {
        k++;
        if (k == poz && typeid(*prod) == typeid(Caiet)) {
            return prod;
        } else if (k == poz && typeid(*prod) == typeid(Carte)) {
            throw NuEsteTipulPotrivit(typeid(Caiet).name(),typeid(*prod).name());
        } else {
            throw DepasesteLimitele();
        }
    }
}
