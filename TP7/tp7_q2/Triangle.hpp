#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Forme.hpp"
#include <iostream>

class Triangle: public Forme
{
    public:
        Triangle(int x=0,int y=0,int c = 0):Forme(x,y),_c(c){}
        ~Triangle(){}
        virtual float surface()const{return (_c*_c)/2;}
        virtual float perimetre()const {return 3*_c;}
        virtual void afficher() const{std::cout<<"Triangle ("<<coordonnee_x()<<","<<coordonnee_y()<<")"<<" c="<<_c;}
        friend std::ostream& operator<<(std::ostream& os, const Triangle& t1);
    private:
        float _c;
};

std::ostream& operator<<(std::ostream& os, const Triangle& t1)
{
    os<<"Triangle ("<<t1.coordonnee_x()<<","<<t1.coordonnee_y()<<")"<<" c="<<t1._c;
    return os;
}

#endif