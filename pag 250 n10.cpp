#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//variabili globali
int nv;
int v[nv];


int main()
{
	int n;
	int sceltatip;
	int sceltaord;
	sceltatipologia(sceltatip);
	
	switch(sceltatip)
	{
		case 0:
			
			numeritot(nv)
			arraycasuale();
			sceltaordine(sceltaord);
			
			switch(sceltaord)
			{
				case 0:
					
					
					
				break;
					
				case 1:
					
					
					
				break;
			}
			
		break;
		
		case 1:
			
			
			sceltaordine(sceltaord);
			
			switch(sceltaord)
			{
				case 0:
					
					
					
				break;
					
				case 1:
					
					
					
				break;
			}
			
		break;
		
	}
}

numeritot(int &nv)
{
	
	cout<<"inserisci il totale dei numeri che vuoi: ";
	cin>>nv;
	cout<<"\n";
	
}

int sceltatipologia(int &sceltatip)
{
	cout<<"Inserisci come vuoi riempire il vettore :";
	cout<<"0:casuale; 1:manuale";
	cin>>scelta;
	cout<<"\n";
	
}
int sceltaordine(int &sceltaord)
{
	
	cout<<"Inserisci come vuoi visualizzare il vettore :";
	cout<<"0:da destra verso sinistra; 1:da sinistra verso destra";
	cin>>sceltaord;
	cout<<"\n";
	
}
