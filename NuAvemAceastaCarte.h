
#ifndef OOP_NUAVEMACEASTACARTE_H
#define OOP_NUAVEMACEASTACARTE_H

#include<iostream>
#include "IOStream.h"
class NuAvemAceastaCarte : public std::exception, public IOStream {
public:
    NuAvemAceastaCarte() = default;

    [[nodiscard]] const char* what() const noexcept override;

    void Print(std::ostream&) const override;
};
#endif //OOP_NUAVEMACEASTACARTE_H
