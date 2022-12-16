
#ifndef UNTITLED1_CAIET_H
#define UNTITLED1_CAIET_H

#include "Produs.h"

#include<string>

class Caiet : public Produs {
    std::string tip;

public:
    Caiet(std::string denumire, int pret, std::string tip);

    const std::string &getTip() const;

    void setTip(std::string tip);

    void prezentareaProdusului() override;

   void reducere() const override;

    Caiet(const Caiet& rhs);

    Caiet& operator=(Caiet rhs);

    void Print(std::ostream&) const override;

};

#endif //UNTITLED1_CAIET_H
