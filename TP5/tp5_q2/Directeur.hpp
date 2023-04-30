#ifndef DIRECTEUR_HPP
#define DIRECTEUR_HPP
#include "salarie.hpp"

class directeur:public Salarie
{
    public:
        directeur(char* nom, int bureau = 0, float fixe = 0.0,float prime = 0.0, int nb_employe=0);
        ~ directeur(){_nb_directeur--;}
        void afficher() ;
        void set_fixe(float fixe){_fixe = fixe;}
        void set_prime(float prime){_prime = prime;}
        void set_nb_employe(int nb_employe){_nb_employe = nb_employe;}
        float calcul_salaire();
        
        int get_nb_directeur() const;
    private:
        float _fixe ;
        float _prime;
        int _nb_employe;
        static int _nb_directeur;
};


#endif