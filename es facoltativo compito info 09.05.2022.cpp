#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int riempivettore();
int main()
{
	
	riempivettore();
	
	
}

int riempivettore()
{
	//variabili
	int i=0;
	int x=0;
	int c=0;
	int r=0;
	int n=0;
	
	cout<<"Inserisci un numero di righe non superiore a 10: ";
	cin>>r;
	cout<<"\n";
	cout<<"Inserisci un numero di colonne non superiori a 20: ";
	cin>>c;
	cout<<"\n";
	
	int v[r][c];
	
	srand(time(NULL));
	
	for(x=0;x<c;x++)
	{
		for(i=0;i<r;i++)
		{
			n=rand()%100;
			v[x][i]=n;
			cout<<v[x][i]<<"\t";
		}
		cout<<"\n";
	}
}
