#include "ListePoints.hpp"

ListePoints::ListePoints():Liste(){}
ListePoints::~ListePoints(){}
void ListePoints::ajouter(double x, double y) //il ajoute l'adresse d'un nouveau point dans la liste
{
    Point* a = new Point(x,y);
    Liste::ajoute(a);
}
void ListePoints::afficher()
{
    if(premier() == nullptr) // test si la liste est vide ou pas
        std::cout<<"vide"<<std::endl;
    else do
    {
        Point a = *((Point*)premier());
        a.affiche();
    }while(prochain()!=nullptr);
}