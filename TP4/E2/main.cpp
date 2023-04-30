#include "Vecteur3d.hpp"

int main()
{
    Vecteur3d v1(1,2,3),v2(1,1,1),v3;
    int scalaire;
    
    v3 = v1+v2;
    cout<<v3;
    scalaire = v1*v2;
    cout<<"scalaire = "<<scalaire<<endl;
    cout<<(v1==v2)<<endl<<(v1!=v2)<<endl;
    cout<<"Nouvel vecteur: ";
    cin>>v3;
    cout<<endl<<v3;

    return 0;
}