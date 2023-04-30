#ifndef EMPLOYE_HPP
#define EMPLOYE_HPP
#include "salarie.hpp"

class Employe:public Salarie
{
    public:
        Employe(char* nom, int bureau = 0, float taux_horaire = 0.0,
        float nb_heures = 0.0);
        ~Employe(){_nb_employe--;}
        void afficher() ;
        void set_taux(float taux_horaire){_taux_horaire= taux_horaire;}
        void set_heures(float nb_heures){_nb_heures = nb_heures;}
        float calcul_salaire();
        
        int get_nb_employe() const;
    private:
        float _taux_horaire;
        float _nb_heures;
        static int _nb_employe;
};

#endif