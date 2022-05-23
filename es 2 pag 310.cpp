//Scrivi un programma che legga da tastiera due matrici A e B di N × N e calcoli la somma C = A + B eil prodotto D = A × B, visualizzando le matrici ottenute.

#include <iostream>

using namespace std;

//variabili glogali
const int n=3;
int a[n][n];
int b[n][n];
int c[n][n];

int riempimatricea();
int riempimatriceb();
int	mostramatrice();
int somma();
int	prodotto();
int main()
{
	
	riempimatricea();
	cout<<"\n";
	riempimatriceb();
	cout<<"\n";
	somma();
	mostramatrice();
	cout<<"\n";
	cout<<"\n";
	prodotto();
	mostramatrice();
	cout<<"\n";
	
}

int riempimatricea()
{
	//variabili
	int x;
	int i;
	int num;

	//calcoli
	for(i=0;i<n;i++)
	{
		for(x=0;x<n;x++)
		{
			
			cout<<"Inserisci un numero nella cella ["<<i<<"]"<<"["<<x<<"]: ";
			cin>>num;
			a[i][x]=num;
			
		}
	}
	
	cout<<"Fine prima matrice"<<endl;
	
}

int riempimatriceb()
{
	//variabili
	int x;
	int i;
	int num;

	//calcoli
	for(i=0;i<n;i++)
	{
		for(x=0;x<n;x++)
		{
			
			cout<<"Inserisci un numero nella cella ["<<i<<"]"<<"["<<x<<"]: ";
			cin>>num;
			b[i][x]=num;
			
		}
	}
	
	cout<<"Fine seconda matrice"<<endl;
	
}

int mostramatrice()
{
		//variabili
	int x;
	int i;

	//calcoli
	for(i=0;i<n;i++)
	{
		for(x=0;x<n;x++)
		{
			cout<<c[i][x]<<"\t";	
		}
		cout<<"\n";
	}
}

int somma()
{
	//variabili
	int i;
	int x;
	
	//calcoli
	for(i=0;i<n;i++)
	{
		for(x=0;x<n;x++)
		{
			c[i][x]=a[i][x]+b[i][x];	
		}
	}
}

int prodotto()
{
	//variabili
	int i;
	int x;
	
	//calcoli
	for(i=0;i<n;i++)
	{
		for(x=0;x<n;x++)
		{
			c[i][x]=a[i][x]*b[i+1][x+1]+a[i][x+1]*b[i+2][x+2]+a[i][x+3]*b[i+3][x+3];	
		}
	}
}
