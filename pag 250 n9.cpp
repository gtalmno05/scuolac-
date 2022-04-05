// Scrivi un programma che riceve in ingresso una sequenza di N numeri interi con il valore N inseritodall’utente e li memorizza in un vettore vetA. 
//Terminato l’inserimento della sequenza di numeri, ilprogramma deve visualizzare una riga di asterischi per ogni numero inserito in modo che il numerodi asterischi nella riga 
//sia pari al valore del numero inserito. 

#include <iostream>

using namespace std;

int numasterischi(int ntot);
int main()
{
	//variabili
	int ntot;
	
	ntot=0;
	
	cout<<"Inserisci quanti numeri vuoi inserire: ";
	cin>>ntot;
	
	numasterischi(ntot);
	
	system("pause");
	return 0;
}

int numasterischi(int ntot)
{
	
	//variabili
	int n;
	int v[n];
	int i;
	int c;
	int x;
	//calcoli
	i=0;
	c=0;
	x=0;
	
	for(i=0;i<ntot;i++)
	{
		
		cout<<"Inserisci un numero: ";
		cin>>n;
		v[i]=n;
		cout<<endl;
		
	}
	
	for(x=0;x<ntot;x++)
	{
		
		cout<<"vetA"<<"["<<x<<"]";
		
		for(c=0;c<v[x];c++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	
}
}

