#ifndef __STATISTICS_H__
#define __STATISTICS_H__

#include <iostream>

class Statistics {
private:
    int x;
    int y;
    int ws;

public:
    Statistics(int x, int y, int ws);
    Statistics(Statistics const &cp);
    ~Statistics();

    int getx();
    int gety();
    double stat1();
    double stat2();
};

#endif