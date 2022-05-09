#include <iostream>

using namespace std;

//variabili
const int tanti=10;
int v[tanti];

int totvendita();
int riempivettore();
int main()
{
	
	riempivettore();
	totvendita();
	
}

int riempivettore()
{
	//variabili
	int i;
	
	for(i=0;i<tanti;i++)
	{
		cout<<"Inserisci quanti capi hai comprato: ";
		cin>>v[i];
		cout<<"\n";
	}
	
}

int totvendita()
{
	//variabili 
	int i;
	int tot=0;
	
	for(i=0;i<tanti;i++)
	{
		
		tot=tot+v[i];
		
	}
	
	cout<<"Il numero totale di capi che il negozio ha venduto e' di: "<<tot<<" capi"<<endl;
	
	tot=tot/tanti;
	
	cout<<"La media dei capi comprati per cliente e' di: "<<tot<<" capi per cliente"<<endl;
}
