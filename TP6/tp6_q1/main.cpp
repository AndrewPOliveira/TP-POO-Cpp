#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    string nom; // Il demande le nom du fichier
    cout << "Nom du fichier qui sera enregistrer: ";
    cin >> nom;
    
    ofstream f1(nom, ios::out | ios::binary);// Il ouvre le fichier pour une écriture binaire
    
    if (!f1.is_open()) // Il vérifie si il a été ouvert correctement
    { 
        cerr << "Operation invalide! " << endl;
    }
    else // les entiers seront demander au utilisateur et après ils seront enregistrer
    {
        int ent;
        cout<<"Entree avec les entiers (entree avec 0 pour finir): ";
        do 
        {
            cin >> ent;
            if (ent != 0)
                f1.write(reinterpret_cast<const char*>(&ent), sizeof(ent));
        } while (ent != 0);
    }
    // Il ferme le fichier
    f1.close();

    return 0;
}
