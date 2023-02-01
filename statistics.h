#ifndef __STATISTICS_H__
#define __STATISTICS_H__

#include <iostream>

//! @class Statistics
//! \brief Klasa operująca na wprowadzonych danych 

class Statistics {
private:
    int x;
    int y;
    int ws;

public:

    //! \brief table wprowadzenia wartosci
    //! | x | y | ws |
    //! |---|---|----|
    //! | 1 | 2 |  3 |
    //! | 4 | 5 |  6 |
    //! | 7 | 8 |  9 |
    Statistics(int x, int y, int ws);
    Statistics(Statistics const &cp);
    ~Statistics();

    int getx();
    int gety();
    double stat1();
    //! \brief funkcja statystyczna 2
    //! \f$ \int_{a}^{b} f(x) dx \f$
    double stat2();
};

#endif