
#ifndef UNTITLED1_CARTE_H
#define UNTITLED1_CARTE_H

#include "Produs.h"

#include<string>

class Carte : public Produs {
    std::string gen;
public :
    Carte(const std::string &denumire, int pret, const std::string &gen);

    //Carte(const std::string &den, int p, const std::string &g);

    const std::string &getGen() const;

    void setGen(const std::string &gen);

    void prezentareaProdusului() override;

    void reducere() const override;

    Carte(const Carte &rhs);

    Carte& operator=(Carte rhs);

    void Print(std::ostream&) const override;
};

#endif //UNTITLED1_CARTE_H
