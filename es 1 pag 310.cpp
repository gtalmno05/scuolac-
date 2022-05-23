//L’utente inserisce una matrice N × M composta da numeri interi. Il programma scambia le righe paricon quelle dispari. Le dimensioni della matrice vengono scelte dall’utente tra i valori massimi fissatiall’interno del programma (10 × 20)

#include <iostream>

using namespace std;

//variabili glogali
const int n=10;
const int m=20;
int v[n][m];

int scambiarighe(int r,int c);
int mostramatrice(int r,int c);
int riempimatrice(int &r,int &c);
int main()
{
	//variabili
	int r;
	int c;
	
	//input dati
	cout<<"Inserisci un numero di righe: (valore max 10) ";
	cin>>r;
	cout<<"\n";
	cout<<"Inserisci un numero di colonne: (valore max 20) ";
	cin>>c;
	cout<<"\n";
	
	riempimatrice(r,c);
	mostramatrice(r,c);
	scambiarighe(r,c);
	mostramatrice(r,c);
}

int riempimatrice(int &r,int &c)
{
	//variabili
	int x;
	int i;
	int n;

	//calcoli
	for(i=0;i<r;i++)
	{
		for(x=0;x<c;x++)
		{
			
			cout<<"Inserisci un numero nella cella ["<<i<<"]"<<"["<<x<<"]: ";
			cin>>n;
			v[i][x]=n;
			
		}
	}
}

int mostramatrice(int r,int c)
{
		//variabili
	int x;
	int i;

	//calcoli
	for(i=0;i<r;i++)
	{
		for(x=0;x<c;x++)
		{
			cout<<v[i][x]<<"\t";	
		}
		cout<<"\n";
	}
}

scambiarighe(int r,int c)
{
		//variabili
	int x;
	int i;
	int t;

	//calcoli
	for(i=0;i<r;i=i+2)
	{
		for(x=0;x<c;x++)
		{
			t=v[i][x];
			v[i][x]=v[i+1][x];
			v[i+1][x]=t;
		}
	}
}

