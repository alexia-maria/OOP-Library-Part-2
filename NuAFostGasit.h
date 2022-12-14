//
// Created by Alexia on 12/12/2022.
//

#ifndef UNTITLED1_AICIAVEMOCARTE_H
#define UNTITLED1_AICIAVEMOCARTE_H
#include "IOStream.h"
class NuAFostGasit : public std::exception, public IOStream {
public:
    NuAFostGasit() = default;

    [[nodiscard]] const char* what() const noexcept override;

    void Print(std::ostream&) const override;
};
#endif //UNTITLED1_AICIAVEMOCARTE_H
