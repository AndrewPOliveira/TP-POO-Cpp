#include "Matrice.hpp"

Matrice::Matrice()
{
	_mat = new double*[3];
	for(int i=0;i<3;i++)
		_mat[i]= new double[3];
	
	for(int i=0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			_mat[i][j] = 0;
		}
	}
}

Matrice::Matrice(double mat[][3])
{
	_mat = new double*[3];
	for(int i=0;i<3;i++)
		_mat[i]= new double[3];
	
	for(int i=0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			_mat[i][j] = mat[i][j];
		}
	}
}

void Matrice::Affiche() const
{
	cout<<endl<<"M = "<<endl;	
	for(int i=0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			cout<<_mat[i][j]<<" ";
		}
		cout<<endl;
	}
}