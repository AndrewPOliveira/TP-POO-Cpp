#include <iostream>
#include "String1.hpp"
using namespace std;

int main() {
    String ch1("essai"), ch2 = ch1, ch3('=', 80);
    const String ch4("chaîne de caractères constante");
    ch1[1] = 'E'; // le premier caractère de la chaîne
    cout << ch4[1] << endl;
    ch1 = "<<<< " + ch2 + " >>>>";
    cout << ch1 << endl;
    cin >> ch2;
    ch2 += " de la classe Strin";
    ch2 += 'g';
    if ( ch2 != "" ) cout << ch2 << endl;
    cout << ch2.minuscule() << endl;
    
    return 0;
}