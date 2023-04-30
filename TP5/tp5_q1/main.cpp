#include <iostream>
#include "pointcol.hpp"
using namespace std;

int main()
{
    Pointcol P1(2.5, 3.25, 5);//il a cree un object avec x = 2.5, y = 3.25 et cl = 5 
    P1.affiche1();
    
    /* E3
    L'héritage permet d'utiliser les caractéristiques d'une classe plus générale
    dans une classe plus spécifie, ça permet de réutiliser les codes et éviter les
    répétitions inutiles qui demande plus de temps de codage.
    */

    return 0;
}