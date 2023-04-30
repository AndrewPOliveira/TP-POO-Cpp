#include <iostream>
#include "ListePoints.hpp"
using namespace std;

int main()
{
    ListePoints lp1;
    lp1.afficher(); //test si la liste est vide
    lp1.ajouter(1,2); // on ajoute deux points
    lp1.ajouter(3,4);
    lp1.afficher(); // on affiche les points

    return 0;
}
