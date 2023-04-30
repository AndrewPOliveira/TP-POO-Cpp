#include "Employe.hpp"
#include <iostream>
using namespace std;

int Employe::_nb_employe = 0; 

Employe::Employe(char* nom, int bureau,float taux_horaire, float nb_heures):Salarie(nom, bureau)
{
    set_taux(taux_horaire);
    set_heures(nb_heures);
    _nb_employe++;
}
void Employe::afficher()
{
    Salarie::afficher();
    cout<<"taux_h:"<< _taux_horaire<<endl<<"heures work:"<< _nb_heures <<endl;
}
float Employe::calcul_salaire()
{
    return _taux_horaire* _nb_heures;
}
int Employe::get_nb_employe() const
{
    return _nb_employe;
}
