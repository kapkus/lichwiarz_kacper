#ifndef __SEQUENCE_H__
#define __SEQUENCE_H__

#include <iostream>

class Sequence {
private:
    int x;
    int y;

public:
    Sequence(int x, int y);
    Sequence(Sequence const &cp);
    ~Sequence();

    int getx();
    int gety();
    double seqAdd();
    double seqSub();
};

#endif