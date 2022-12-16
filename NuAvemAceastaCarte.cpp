#include "NuAvemAceastaCarte.h"

const char *NuAvemAceastaCarte::what() const noexcept {
    return "Nu s-a gasit un produs cu acest pret";
}
void NuAvemAceastaCarte::Print(std::ostream &os) const {
    os<<this->what();
}