#include <iostream>
#include "statistics.h"

// constructors and destructors
Statistics::Statistics(int x, int y, int ws) {
    this->x = x;
    this->y = y;
    this->ws = ws;
}

Statistics::Statistics(Statistics const &cp) {
    this->x = cp.x;
    this->x = cp.y;
    this->ws = cp.ws;
}

Statistics::~Statistics() {
}

// getters
int Statistics::getx() {
    return x;
}

int Statistics::gety() {
    return y;
}

// class functions
double Statistics::stat1() {
    return x*y;
}

double Statistics::stat2() {
    return x*y*ws;
}