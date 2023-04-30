#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    string nom; // Il demande le nom du fichier
    cout << "Nom du fichier qui sera lister: ";
    cin >> nom;
    
    ifstream f1(nom, ios::in | ios::binary);// Il ouvre le fichier pour une écriture binaire
    
    if (!f1.is_open()) // Il vérifie si il a été ouvert correctement
        cout << "Operation invalide! " << endl;
    else // les entiers seront lister
    {
        int ent;
        cout<<"Les entiers sont: ";
        while (f1.read((char*)&ent, sizeof(int))) 
            cout<<ent<<" , ";
        cout<<endl;
    }
    
    f1.close();// Il ferme le fichier

    return 0;
}
