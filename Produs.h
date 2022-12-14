
#ifndef UNTITLED1_PRODUS_H
#define UNTITLED1_PRODUS_H

#include<string>
#include<iostream>
#include<memory>
#include "IOStream.h"
/*class Produs;
static std::ostream & operator << (std::ostream &out, Produs &prod);\
*/
class Produs : public IOStream{
protected:
    std::string denumire;
    int pret;

public:
    Produs(const std::string &denumire, int pret);

    Produs() = default;

    //Produs(const std::string &den, int p);

    const std::string &getDenumire() const;

    void setDenumire(const std::string &denumire);

    int getPret() const;

    void setPret(int pret);

    virtual void prezentareaProdusului();

    virtual ~Produs();

    virtual void  reducere() const = 0;

    //void anuntReducere() const;

    Produs(const Produs &rhs);

    Produs& operator=(const Produs& rhs);
};

#endif //UNTITLED1_PRODUS_H
