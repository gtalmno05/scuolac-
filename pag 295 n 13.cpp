#include <iostream>

using namespace std;

//variabili globali
const int mass=10;
int v[mass];
string v1[mass];

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
	
	for(i=0;i<mass;i++)
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
	
	for(i=0;i<mass;i++)
	{
		if(v[i]>=18)
		{
			cout<<v1[i]<<" "<<v[i]<<" "<<"posizione "<<" "<<"["<<i<<"]"<<endl;
		}
	}
	
	
}
