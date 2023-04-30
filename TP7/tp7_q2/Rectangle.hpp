#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Forme.hpp"
#include <iostream>

class Rectangle: public Forme
{
    public:
        Rectangle(int x=0,int y=0,int L = 0,int l=0):Forme(x,y),_L(L),_l(l){}
        ~Rectangle(){}
        virtual float surface()const{return _L*_l;}
        virtual float perimetre()const {return 2*_L+2*_l;}
        virtual void afficher() const{std::cout<<"Rectangle ("<<coordonnee_x()<<","<<coordonnee_y()<<")"<<" L="<<_L<<" l="<<_l;}
        friend std::ostream& operator<<(std::ostream& os, const Rectangle& r1);
    protected:
        float _L,_l;
};

std::ostream& operator<<(std::ostream& os, const Rectangle& r1)
{
    os<<"Rectangle ("<<r1.coordonnee_x()<<","<<r1.coordonnee_y()<<")"<<" L="<<r1._L<<" l="<<r1._l;
    return os;
}

#endif