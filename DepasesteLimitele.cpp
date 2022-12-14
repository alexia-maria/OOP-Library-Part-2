#include "DepasesteLimitele.h"

const char *DepasesteLimitele::what() const noexcept {
    return "Pe aceasta pozitie nu avem niciun produs, nici caiet, nici carte\n";
}
void DepasesteLimitele::Print(std::ostream &os) const {
    os<<this->what();
}
