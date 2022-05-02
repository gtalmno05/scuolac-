#include <iostream>

using namespace std;

//variabili globali
const int max=10;
int v[max];
string v1[max];

int maggiorenni();
int leggidati();
int main()
{
	leggidati();
	maggiorenni();
}

int leggidati()
{
	
	int i;
	
	for(i=0;i<max;i++)
	{
		cout<<"Inserisci il nome:";
		cin>>v1[i];
		cout<<"\n";
		cout<<"Inserisci l'eta': ";
		cin>>v[i];
		cout<<"\n";
	}
	
}

int maggiorenni()
{
	//variabili
	int i;
	
	for(i=0;i<max;i++)
	{
		if(v[i]>=18)
		{
			cout<<v1[i]<<v[i] <<"posizione "<<"["<<i<<"]"<<endl;
		}
	}
	
	
}
