#include "AiciAvemOCarte.h"

const char *AiciAvemOCarte::what() const noexcept {
    return "Pe aceasta pozitie avem o carte";
}
void AiciAvemOCarte::Print(std::ostream &os) const {
    os<<this->what();
}
