#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//variabili globali
int nv;
int v[10];

int ordinearray(int sceltaord);
int arraycasuale();
int sceltaordine(int &sceltaord);
int sceltatipologia(int &sceltatip);
int numeritot(int &nv);
int main()
{
	int n;
	int sceltatip;
	int sceltaord;
	int v[nv];
	
	sceltatipologia(sceltatip);
	
	switch(sceltatip)
	{
		case 0:
			
			numeritot(nv);
			arraycasuale();
			sceltaordine(sceltaord);
			
			switch(sceltaord)
			{
				case 0:
					
				ordinearray(sceltaord);	
					
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

int numeritot(int &nv)
{
	
	cout<<"inserisci il totale dei numeri che vuoi: ";
	cout<<"\n";
	cin>>nv;
	cout<<"\n";
	
}

int sceltatipologia(int &sceltatip)
{
	cout<<"Inserisci come vuoi riempire il vettore :";
	cout<<"\n";
	cout<<"0:casuale; 1:manuale";
	cout<<"\n";
	cin>>sceltatip;
	cout<<"\n";
	
}
int sceltaordine(int &sceltaord)
{
	
	cout<<"Inserisci come vuoi visualizzare il vettore :";
	cout<<"\n";
	cout<<"0:da destra verso sinistra; 1:da sinistra verso destra";
	cout<<"\n";
	cin>>sceltaord;
	cout<<"\n";
	
}

int arraycasuale()
{
	int i;
	
	for(i=0;i<nv;i++)
	{
		
		v[i]=(rand()%nv);
		
	}
	
}

int ordinearray(int sceltaord)
{
	int i;
	switch(sceltaord)
	{
		
		case 0:
			
			for(i=0;i>nv;i--)
			{
				
				cout<<v[i]<<endl;
				
			}
			
		break;
		
		case 1:
			
			
			
		break;
		
	}
	
}
