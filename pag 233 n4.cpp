#include <iostream>

using namespace std;

int operazione(int n);
int leggidati(int &n);
int main(void)
{
	//variabili
	int n;
	int risposta;
	
	leggidati(n);
	risposta=operazione(n);
	
	cout<<"il numero invertito e': "<<risposta<<endl;
	
}

int leggidati(int &n)
{
	
	cout<<"Inserisci un numero: ";
	cin>>n;
	cout<<"\n";
	
}

int operazione(int n)
{
	int numeroinvertito;
	numeroinvertito=0;
	while(n>0)
	{
		numeroinvertito*=10;
		numeroinvertito+=n%10;
		n/=10;
	}
	
	return numeroinvertito;
	
}
