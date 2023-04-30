#include <iostream>
#include "String1.hpp"
using namespace std;

int main() {
    String ch1("essai"), ch2 = ch1, ch3('=' , 80);
    const String ch4("chaîne constante");
    ch1.nieme(1) = 'E'; // le premier caractère de la chaîne
    cout << ch4.nieme(1) << endl; 
    ch2.saisie();
    ch2.concatene(" de la classe String");
    ch2.concatene('g');
    if ( !egal(ch2, "") ) {
        ch2.affiche();
        cout << endl;
    }
    ch2.minuscule().affiche();// est-ce bien raisonnable ???
    cout << endl;
    return 0;
}