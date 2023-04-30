#include "salarie.hpp"
#include <cstring>
#include <iostream>
using namespace std;

int Salarie::_nb_obj = 0;

Salarie::Salarie(char* nom, int bureau) 
{
    _nom = new char[strlen(nom)+1];
    strcpy(_nom, nom);
    set_bureau(bureau);
    _nb_obj++;
}
void Salarie::afficher()
{
    cout<<"nom: "<<_nom<<endl <<"bureau: "<<_bureau<<endl<<"tel:"<<get_telephone()<<endl;
}
char* Salarie::get_telephone()
{
    static char* telephone[]={"001", "002", "003", "004", "005", "006"};
    int nb_tels = sizeof(telephone)/sizeof(*telephone); // 6
    if(_bureau > 0 && _bureau <= nb_tels) 
        return telephone[_bureau-1];
    else
        return "000";
}
int Salarie::get_nb_salarie() const
{
    return _nb_obj;
}
