#include <iostream>

using namespace std;

int riempivettore();
int main()
{
	riempivettore();
}

int riempivettore()
{
	//variabili
	string nome;
	cout.precision(2);
	int n;
	string citta[n];
	int ta;
	int tb;
	int mta;
	int mtb;
	int tempalta[n];
	int tempbassa[n];
	int i;
	
	cout<<"inserisci il numero di citta per il confronto: ";
	cin>>n;
	cout<<"\n";
	
	for(i=0;i<n;i++)
	{
		cout<<"insersci il nome della citta:";
		cin>>nome;
		cout<<"\n";
		citta[i]=nome;
		cout<<"temperatura piu alta: ";
		cin>>ta;
		tempalta[i]=ta;
		cout<<"\n";
		cout<<"temperatura piu bassa: ";
		cin>>tb;
		tempbassa[i]=tb;
		cout<<"\n";		
	}

	for(i=0;i<n;i++)
	{
		mta=mta+tempalta[i];
	}
	
	for(i=0;i<n;i++)
	{
		mtb=mtb+tempbassa[i];
	}

	mta=mta/n;
	mtb=mtb/n;
	
}
