#ifndef CERCLE_HPP
#define CERCLE_HPP

#include "Forme.hpp"
#include <iostream>
#define pi 3.14159

class Cercle: public Forme
{
    public:
        Cercle(int x=0,int y=0,int r = 0):Forme(x,y),_r(r){}
        ~Cercle(){}
        virtual float surface()const{return pi*_r*_r;}
        virtual float perimetre()const {return 2*pi*_r;}
        virtual void afficher() const{std::cout<<"cercle ("<<coordonnee_x()<<","<<coordonnee_y()<<")"<<" r="<<_r;}
        friend std::ostream& operator<<(std::ostream& os, const Cercle& c1);
    private:
        float _r;
};
std::ostream& operator<<(std::ostream& os, const Cercle& c1)
{
    os<<"cercle ("<<c1.coordonnee_x()<<","<<c1.coordonnee_y()<<")"<<" r="<<c1._r;
    return os;
}
#endif