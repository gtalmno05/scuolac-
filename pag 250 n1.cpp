#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int leggidati(int &ntot);
int main(void)
{
	//variabili
	int i;
	int ntot;
	int n;
	int vet[n];
	
	srand(time(0));
	
	leggidati(ntot);
	
	for(i=0;i<ntot-1;i++)
	{
		
		cout<<"Inserisci un numero: ";
		cin>>n;
		cout<<"\n";
		vet[i]=n;
		
	}
	
	system("pause");
	return 0;
}

int leggidati(int &ntot)
{
	
	cout<<"Inserisci quanti numeri vuoi inserire: ";
	cin>>ntot;
	cout<<"\n";
	
}
