#include <iostream>

using namespace std;


int leggidati(int &n,int &v[n]);
int main(void)
{
	//variabili
	int n;
	int v[n];
	
	leggidati(int &n,int &v[n]);
	
}

int leggidati(int &n,int &v[n])
{
	int i;
	int nv;
	
	cout<<"Inserisci quanti numeri vuoi inserire: ";
	cin>>nv;
	cout<<"\n";
	
	for(i=0;i<nv-1;i++)
	{
		
		cout<<"Inserisci un numero: ";
		cin>>n;
		cout<<"\n";
		v[i]=n;
		
	}
	
}
