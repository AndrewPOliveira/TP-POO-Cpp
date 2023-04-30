#ifndef POINTCOL_HPP
#define POINTCOL_HPP

#include "point.hpp"

class Pointcol: public Point
{
    public:
        Pointcol(double=0,double=0,int=0);
        ~Pointcol(){};
        void colore(const int);
        void affiche1();
    private:
        int _cl;
};

#endif