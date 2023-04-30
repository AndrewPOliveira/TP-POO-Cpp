#include <iostream>

using namespace std;

int nbjour (int, int);

int main()
{
	unsigned int mois, annee;
	cout<<"annee: ";
	cin>>annee;
	cout<<endl<<"mois: ";
	cin>>mois;
	cout<<nbjour(mois,annee)<<" jours";
	return 0;
}

int nbjour(int mois, int annee)
{
	if(mois == 1||mois == 3||mois == 5||mois == 7||mois == 8||mois == 10||mois == 12)
		return 31;
	else if(mois==2)
	{
		if (annee%400 == 0||annee%4 == 0)
			return 29;
		else
			return 28;
	}
	else
		return 30;
}