#include "NuEsteTipulPotrivit.h"
#include<iostream>

NuEsteTipulPotrivit::NuEsteTipulPotrivit(std::string FoundType, std::string ExpectedType) :FoundType(FoundType),
ExpectedType(ExpectedType), Mesaj("Expected Type "+ExpectedType+" found "+ FoundType){

};

const char *NuEsteTipulPotrivit::what() const noexcept {
    return Mesaj.c_str();
}

void NuEsteTipulPotrivit::Print(std::ostream &os) const {
    os<<this->what();
}
