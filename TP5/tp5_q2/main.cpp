#include <iostream>
#include "Commercial.hpp"
#include "Directeur.hpp"
using namespace std;

int main()
{
    commercial s1("PESSOA",1,35,10,20,15),s2("MACHADO",2,20,15,5,18);
    directeur d1("Lucas", 1,15,30,5);
    s1.afficher();
    d1.afficher();
    cout<<endl<<"nb Directeur = "<<d1.get_nb_directeur()<<endl<<"nb commercial = "<<s1.get_nb_commerciaux()
        <<endl<<"nb salarie = "<<s1.get_nb_salarie()<<endl;

    return 0;
}