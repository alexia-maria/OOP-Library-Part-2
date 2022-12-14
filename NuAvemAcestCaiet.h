
#ifndef UNTITLED1_NUAVEMACESTCAIET_H
#define UNTITLED1_NUAVEMACESTCAIET_H
#include "IOStream.h"

class NuAvemAcestCaiet : public std::exception, public IOStream {
public:
     NuAvemAcestCaiet() = default;

    const char* what() const noexcept override;

    void Print(std::ostream&) const;
};
#endif //UNTITLED1_NUAVEMACESTCAIET_H
