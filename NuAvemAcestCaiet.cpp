#include "NuAvemAcestCaiet.h"

const char *NuAvemAcestCaiet::what() const noexcept {
    return "Pe aceasta pozitie nu avem niciun produs, nici caiet, nici carte\n";
}
void NuAvemAcestCaiet::Print(std::ostream &os) const {
    os<<this->what();
}