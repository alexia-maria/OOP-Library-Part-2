//
// Created by Alexia on 12/7/2022.
//

#ifndef UNTITLED1_NUAVEMACEASTACARTE_H
#define UNTITLED1_NUAVEMACEASTACARTE_H

#include "IOStream.h"

class NuAvemAceastaCarte : public std::exception, public IOStream {
public:
    NuAvemAceastaCarte() = default;

    const char* what() const noexcept override;

    void Print(std::ostream&) const;
};

#endif //UNTITLED1_NUAVEMACEASTACARTE_H
