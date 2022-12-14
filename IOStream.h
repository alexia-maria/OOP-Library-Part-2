
#ifndef UNTITLED1_IOSTREAM_H
#define UNTITLED1_IOSTREAM_H
#include<iostream>


class IOStream {
protected:
    virtual void Print(std::ostream &) const = 0;

    friend std::ostream& operator<<(std::ostream &, const IOStream&);

    virtual ~IOStream();
};
#endif //UNTITLED1_IOSTREAM_H
