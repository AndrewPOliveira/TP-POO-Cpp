#include "Set_Of_Integer.cpp"

int main()
{
	Set_Of_Integer s1,s2;
	int aux, nb_dif=0;
	
	for(int i =0;i<10;i++) //atribuition de differents valeurs
		s1.Ajouter(i);
	for(int i = 5; i<12;i++)
		s2.Ajouter(i);
	
	aux = s1.Nb_elements();
	for(int i=0; i<aux;i++)
		nb_dif+=s2.Chercher_Num(s1.Return_Num(i)); //si l'entier est different on fait une increment de 1
	
	cout<<"Il y a "<<nb_dif<<" entiers differents!"<<endl;
	
	return 0;
}