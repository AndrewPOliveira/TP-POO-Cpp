#ifndef CARRE_HPP
#define CARRE_HPP

#include "Rectangle.hpp"

class Carre: public Rectangle
{
    public:
        Carre(int x=0,int y=0,int l = 0):Rectangle(x,y,l,l){}
        ~Carre(){}
        virtual void afficher() const{std::cout<<"Carre ("<<coordonnee_x()<<","<<coordonnee_y()<<")"<<" c="<<_l;}
        friend std::ostream& operator<<(std::ostream& os, const Carre& c1);
};

std::ostream& operator<<(std::ostream& os, const Carre& c1)
{
    os<<"Carre ("<<c1.coordonnee_x()<<","<<c1.coordonnee_y()<<")"<<" c="<<c1._l;
    return os;
}

#endif