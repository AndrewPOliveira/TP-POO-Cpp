#include <iostream>
#include <string.h>

using namespace std;

void inverter(char**);

int main()
{	
	char **A = new char*[10];
	for(int i=0;i<10;i++)
		A[i]= new char[200];

	cout<<endl<<"Entree avec: "<<endl;	
	for(int i=0;i<10;i++)
	{
			cout<<endl<<"Phrase ["<<i<<"]: ";
			cin>>A[i];
	}

	delete[] A;
	return 0;
}
void inverter(char** A)
{
	
}