#include <iostream>

using namespace std;

void imprimer_matrice(int**,int,int);
void transp_matrice(int**,int**,int,int);
//void unid_matrice(int**,int*,int,int);

int main()
{
	int N, M;
	cout<<"Entree avec les dimensions (N,M): ";
	cin>>N>>M;
	
	int **A = new int*[N];
	int **At = new int*[N];
	for(int i=0;i<N;i++)
	{
		A[i]= new int[M];
		At[i]= new int[M]; 
	}
	
	cout<<endl<<"Entree avec: "<<endl;	
	for(int i=0;i<N;i++)
	{
		for(int j =0;j<M;j++)
		{
			cout<<endl<<"A["<<i<<"]["<<j<<"] = ";
			cin>>A[i][j];
		}
	}
	
	imprimer_matrice(A,N,M);
	
	transp_matrice(A,At,N,M);
	imprimer_matrice(At,N,M);
	
	delete[] A;
	delete[] At;
	return 0;
}

void imprimer_matrice(int** A, int N,int M)
{
	cout<<endl<<"A = "<<endl;	
	for(int i=0;i<N;i++)
	{
		for(int j =0;j<M;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}

void transp_matrice(int** A,int** B,int N,int M)
{	
	for(int i=0;i<N;i++)
	{
		for(int j =0;j<M;j++)
		{
			B[j][i] = A[i][j];
		}
	}
}

/*
void unid_matrice(int** A,int* C,int N,int M)
{
	for(int i=0;i<N;i++)
	{
		for(int j =0;j<M;j++)
		{
			C[j+i] = A[i][j];
		}
	}
}
*/