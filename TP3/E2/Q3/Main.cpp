#include "Set_Of_Integer.cpp"

int main()
{
	Set_Of_Integer s1;
	
	for(int i =0;i<10;i++) //atribuition de differents valeurs
		s1.Ajouter(i);
	if(s1.Chercher_Num(10))
		cout<<"L'entier lui appartient!"<<endl;
	else
		cout<<"L'entier n'est pas ici!"<<endl;
	
	return 0;
}