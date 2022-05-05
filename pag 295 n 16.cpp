#include <iostream>

using namespace std;

//variabili globali 
int v[3];
double m;
string nome;
string cognome;

int mostravettore();
int riempivettore();
int main()
{
	riempivettore();
	mostravettore();
}

int riempivettore()
{
	cout.precision(3);
	//variabili 
	double n;
	int i;
	
	cout<<"insersci il nome:";
	cin>>nome;
	cout<<"\n";
	cout<<"inserisci il cognome: ";
	cin>>cognome;
	cout<<"\n";
	
	for(i=0;i<3;i++)
	{
		cout<<"inserisci il voto preso alla"<<" "<<i+1<<" "<<"prova"<<endl;
		cin>>n;
		v[i]=n;
	}
	
	m=0;
	
	for(i=0;i<3;i++)
	{
		
		m=m+v[i];
		
	}
	m=m/3;
}

int mostravettore()
{
	
	cout<<cognome<<" "<<nome<<" "<<m<<endl;
	
}
