
#ifndef UNTITLED1_PRODUS_H
#define UNTITLED1_PRODUS_H

#include<string>
#include<iostream>
#include<memory>
#include "IOStream.h"

class Produs : public IOStream{
protected:
    std::string denumire;
    int pret;

public:
    Produs(const std::string &denumire, int pret);

    Produs() = default;

    const std::string &getDenumire() const;

    void setDenumire(std::string &denumire);

    int getPret() const;

    void setPret(int pret);

    virtual void prezentareaProdusului();

    virtual ~Produs();

    virtual void  reducere() const = 0;

    Produs(const Produs &rhs);

    Produs& operator=(const Produs& rhs);
};

#endif //UNTITLED1_PRODUS_H
