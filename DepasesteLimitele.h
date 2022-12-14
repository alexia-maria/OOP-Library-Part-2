//
// Created by Alexia on 12/14/2022.
//

#ifndef UNTITLED1_DEPASESTELIMITELE_H
#define UNTITLED1_DEPASESTELIMITELE_H
#include "IOStream.h"

class DepasesteLimitele : public std::exception, public IOStream {
public:
    DepasesteLimitele() = default;

    const char* what() const noexcept override;

    void Print(std::ostream&) const;
};
#endif //UNTITLED1_DEPASESTELIMITELE_H
