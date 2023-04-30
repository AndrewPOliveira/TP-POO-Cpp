#ifndef FORME_HPP
#define FORME_HPP
#include "Coordonnee.hpp"
#include <iostream>

class Forme
{
    public:
        Forme(int a=0, int b=0):_c(a,b){}
        ~Forme(){}
        virtual float surface()const = 0;
        virtual float perimetre()const = 0;
        virtual void afficher() const = 0;
        void deplace(const int dx,const int dy){_c.deplace(dx,dy);}
        int coordonnee_x() const{return _c.get_x();}
        int coordonnee_y() const{return _c.get_y();}
        friend std::ostream& operator<<(std::ostream& os, const Forme& f1);
        
    private:
        Coordonnee _c;
};

std::ostream& operator<<(std::ostream& os, const Forme& f1)
{
    os<<"("<<f1.coordonnee_x()<<","<<f1.coordonnee_y()<<")";
    return os;
}
#endif