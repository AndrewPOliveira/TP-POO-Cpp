#include "Directeur.hpp"
#include <iostream>
using namespace std;

int directeur::_nb_directeur = 0;

directeur::directeur(char* nom, int bureau, float fixe,float prime, int nb_employes):Salarie(nom, bureau)
{
    set_fixe(fixe);
    set_prime(prime);
    set_nb_employe(nb_employes);
    _nb_directeur++;
}
void directeur::afficher()
{
    Salarie::afficher();
    cout<<"salaire fixe:"<< _fixe <<" la prime:"<< _prime <<endl<<"nombre de salarié:"<< _nb_employe << endl;
}
float directeur::calcul_salaire()
{
    return _fixe + _prime;
}
int directeur::get_nb_directeur() const
{
    return _nb_directeur;
}