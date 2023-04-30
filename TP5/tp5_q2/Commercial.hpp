#ifndef COMMERCIAL_HPP
#define COMMERCIAL_HPP
#include "Employe.hpp"

class commercial:public Employe
{
    public:
        commercial(char* nom, int bureau = 0, float taux_horaire = 0.0,
        float nb_heures = 0.0, float pourcentage=0.0,float chiffre_affaire=0.0);
        ~commercial(){_nb_commerciaux--;}
        void afficher();
        void set_pourcentage(float pourcentage){_pourcentage = pourcentage;}
        void set_chiffre_affaire(float chiffre_affaire){_chiffre_affaire = chiffre_affaire;}
        float calcul_salaire();
        
        int get_nb_commerciaux() const;
    private:
        float _pourcentage;
        float _chiffre_affaire;
        static int _nb_commerciaux;
};
#endif