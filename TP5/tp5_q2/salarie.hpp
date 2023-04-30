#ifndef SALARIE_HPP
#define SALARIE_HPP

class Salarie
{
    public:
        Salarie(char* nom, int = 0);
        ~Salarie(){delete [] _nom;_nb_obj--;}
        void afficher() ;
        void set_bureau(int bureau){_bureau = bureau;}
        char* get_telephone();
        
        int get_nb_salarie() const; //il retourne le nombre de salarie
    private:
        char* _nom;
        int _bureau;
        static int _nb_obj; //variable qui contient la quantite d'objets crees

};

#endif