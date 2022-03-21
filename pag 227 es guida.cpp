#include <iostream>

using namespace std;

int mcd(int m, int n)
{
	int resto;
	
	resto=m%n;
	if(resto==0)
	{
		return n;
	}
	else
	{
		return mcd(n,resto);
	}
	
}

int main()
{
	//variabili
	int n;
	int n1;
	
	cout<<"Inserisci il primo numero: ";
	cin>>n;
	cout<<"\n";
	cout<<"Inserisci il secondo numero: ";
	cin>>n1;
	cout<<"\n";
	
	cout<<"Il mcd tra e'"<<mcd(n,n1);
	cout<<"\n";
	
	system("pause");
	return 0;
}
