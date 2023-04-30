#include "Commercial.hpp"
#include <iostream>
using namespace std;

int commercial::_nb_commerciaux = 0;

commercial::commercial(char* nom, int bureau, float taux_horaire,float nb_heures, float pourcentage, float chiffre_affaire):Employe(nom, bureau, taux_horaire, nb_heures)
{
    set_pourcentage(pourcentage);
    set_chiffre_affaire(chiffre_affaire);
    _nb_commerciaux++;
}
void commercial::afficher()
{
    Employe::afficher();
    cout<<"pourcentage des ventes: "<< _pourcentage<<endl<<" chiffre affaire :"<< _chiffre_affaire <<endl;
}
float commercial::calcul_salaire()
{
    return Employe::calcul_salaire() +(_pourcentage* _chiffre_affaire);
}
int commercial::get_nb_commerciaux() const
{
    return _nb_commerciaux;
}