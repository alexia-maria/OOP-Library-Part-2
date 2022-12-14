//
// Created by Alexia on 12/12/2022.
//

#ifndef UNTITLED1_AICIAVEMOCARTE_H
#define UNTITLED1_AICIAVEMOCARTE_H
#include "IOStream.h"
class AiciAvemOCarte : public std::exception, public IOStream {
public:
    AiciAvemOCarte() = default;

    const char* what() const noexcept override;

    void Print(std::ostream&) const;
};
#endif //UNTITLED1_AICIAVEMOCARTE_H
