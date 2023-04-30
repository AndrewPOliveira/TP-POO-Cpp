#include <iostream>

using namespace std;

void imprimer_matrice(int**,int,int);
void produit_matrice(int**,int**,int**,int,int,int);

int main()
{
	int N, M, P;
	cout<<"Entree avec les dimensions (N,M) et (M,P): ";
	cin>>N>>M>>P;
	
	int **A = new int*[N];
	int **B = new int*[M];
	int **C = new int*[N];
	for(int i=0;i<N;i++)
	{
		A[i]= new int[M];
		C[i]= new int[P];
	}
	for(int i=0;i<M;i++)
		B[i]= new int[P];
	
	cout<<endl<<"Entree avec: "<<endl;	
	for(int i=0;i<N;i++)
	{
		for(int j =0;j<M;j++)
		{
			cout<<endl<<"A["<<i<<"]["<<j<<"] = ";
			cin>>A[i][j];
		}
	}
	for(int i=0;i<M;i++)
	{
		for(int j =0;j<P;j++)
		{
			cout<<endl<<"B["<<i<<"]["<<j<<"] = ";
			cin>>B[i][j];
		}
	}
	produit_matrice(A,B,C,N,M,P);
	imprimer_matrice(C,N,P);
	
	delete[] A;
	delete[] B;
	delete[] C;
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

void produit_matrice(int**A,int**B,int**C,int N,int M, int P)
{
	int sum=0;
	for(int i=0;i<N;i++)
	{
		for(int p=0;p<P;p++)
		{
			for(int j =0;j<M;j++)
			{
				sum+= A[i][j]*B[j][p];
			}
			C[i][p] = sum;
			sum=0;
		}
	}
}