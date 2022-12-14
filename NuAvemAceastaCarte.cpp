#include "NuAvemAceastaCarte.h"

const char *NuAvemAceastaCarte::what() const noexcept {
    return "Nu avem aceasta carte ";
}

void NuAvemAceastaCarte::Print(std::ostream &os) const {
    os<<this->what();
}