#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    
    string nom; // Il demande le nom du fichier
    int rang;
    cout << "Nom du fichier qui sera lister: ";
    cin >> nom;
    
    ifstream f1(nom, ios::in | ios::binary);// Il ouvre le fichier pour une écriture binaire
    
    if (!f1.is_open()) // Il vérifie si il a été ouvert correctement
        cout << "Operation invalide! " << endl;
    else // les entiers seront lister
    {
        cout<<endl<<"Entree avec le rang desire: ";
        cin >>rang;
        
        int ent;
        cout<<"Les entiers avec rang "<<rang<<" sont: ";
        while (f1.read((char*)&ent, sizeof(int))) 
        {
            if((ent>=pow(10,rang-1))&&(ent<pow(10,rang)))
                cout<<ent<<" ";
        }
        cout<<endl;
    }
    
    f1.close();// Il ferme le fichier

    return 0;
}

