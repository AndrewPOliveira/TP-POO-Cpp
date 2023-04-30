#ifndef LISTEPOINTS_HPP
#define LISTEPOINTS_HPP

#include "Liste.hpp"
#include "Point.hpp"

class ListePoints: public Liste, Point 
{
    public:
        ListePoints();
        ~ListePoints();
        void ajouter(double, double);
        void afficher();
};

#endif