#include "NuAFostGasit.h"

const char *NuAFostGasit::what() const noexcept {
    return "Nu s-a gasit un produs cu acest pret";
}
void NuAFostGasit::Print(std::ostream &os) const {
    os<<this->what();
}
