#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//variabili globali
int nv;
int v[15];

int numeriarray();
int ordinearray(int sceltaord);
int arraycasuale();
int sceltaordine(int &sceltaord);
int sceltatipologia(int &sceltatip);
int main()
{
	int n;
	int sceltatip;
	int sceltaord;
	
	sceltatipologia(sceltatip);
	
	switch(sceltatip)
	{
		case 0:
			
			arraycasuale();
			sceltaordine(sceltaord);
			
			switch(sceltaord)
			{
				case 0:
					
					system("cls");
				ordinearray(sceltaord);	
					
				break;
		
				case 1:
					
					system("cls");
					ordinearray(sceltaord);	
					
				break;
			}
			
		break;
		
		case 1:
			
			numeriarray();
			sceltaordine(sceltaord);
			
			switch(sceltaord)
			{
				case 0:
					
					system("cls");
					ordinearray(sceltaord);	
					
				break;
					
				case 1:
					
					system("cls");
					ordinearray(sceltaord);	
					
				break;
			}
			
		break;
		
	}
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
		
		v[i]=(rand()%100);
		
	}
	
}

int ordinearray(int sceltaord)
{
	int i;
	switch(sceltaord)
	{
		
		case 0:
			
			for(i=0;i>15;i++)
			{
				
				cout<<v[i]<<endl;
				
			}
			
		break;
		
		case 1:
			
			for(i=14;i>=0;i--)
			{
				
				cout<<v[i]<<endl;
				
			}
			
		break;
		
	}
	
}

int numeriarray()
{
	int n;
	int i;
	
	for(i=0;i<15;i++)
	{
		cout<<"Inserisci un numero: ";
		cin>>n;
		cout<<"\n";
		
		v[i]=n;
	}
}
