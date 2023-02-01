#include <iostream>
#include "sequence.h"

// constructors and destructors
Sequence::Sequence(int x, int y) {
    this->x = x;
    this->y = y;
}

Sequence::Sequence(Sequence const &cp) {
    this->x = cp.x;
    this->x = cp.y;
}

Sequence::~Sequence() {
}

// getters
int Sequence::getx() {
    return x;
}

int Sequence::gety() {
    return y;
}

// class functions
double Sequence::seqAdd() {
    return x+y;
}

double Sequence::seqSub() {
    return x-y;
}