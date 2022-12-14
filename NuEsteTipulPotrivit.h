//
// Created by Alexia on 12/14/2022.
//

#ifndef UNTITLED1_NUESTETIPULPOTRIVIT_H
#define UNTITLED1_NUESTETIPULPOTRIVIT_H
#include "IOStream.h"

class NuEsteTipulPotrivit : public std::exception, public IOStream {
    std::string FoundType;
    std::string ExpectedType;
    std::string Mesaj;

public :
    NuEsteTipulPotrivit(std::string FoundType, std::string ExpectedType);

    const char* what() const noexcept override;

    void Print(std::ostream&) const;
};
#endif //UNTITLED1_NUESTETIPULPOTRIVIT_H
