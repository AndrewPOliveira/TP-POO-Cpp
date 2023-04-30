#include "pointcol.hpp"

Pointcol::Pointcol(double x,double y,int col):_cl(col),Point(x,y){}
void Pointcol::colore(const int cl)
{
    _cl = cl;
}
void Pointcol::affiche1()
{
    affiche();
    std::cout<<"couleur = "<<_cl<<"\n";
}