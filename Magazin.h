//
// Created by Alexia on 11/30/2022.
//

#ifndef UNTITLED1_MAGAZIN_H
#define UNTITLED1_MAGAZIN_H

#include<vector>
#include "Produs.h"
#include "Carte.h"
#include<memory>

class Magazin {
    static std::vector<std::shared_ptr<Produs>> produse;

public:
    Magazin() = delete;

    static void adaugaProduse(const std::shared_ptr<Produs> &prod);

    static void afiseazaProduse();

    static std::vector<std::shared_ptr<Carte>> gasesteToateCartile();

    static std::shared_ptr<Produs> gasesteProdusulDupaDenumire(const std::string& denumire);

    static std::vector<std::shared_ptr<Produs>> gasesteProdusulDupaPret(int &poz);

    static int GetSize();
};
#endif //UNTITLED1_MAGAZIN_H