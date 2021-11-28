#include <iostream>

using namespace std;

int main()
{
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"questo programma "<<endl;
	
	//variabili
	float iva;
	float p1;
	float p2;
	float p3;
	float piva;
	float pt;
	float pl;
	
	//input dati
	cout<<"inserisci il primo prezzo: ";
	cin>>p1;
	cout<<"\n";
	cout<<"inserisci il secondo prezzo: ";
	cin>>p2;
	cout<<"\n";
	cout<<"inserisci il terzo prezzo: ";
	cin>>p3;
	cout<<"\n";
	cout<<"inserisci la percentuale di iva: ";
	cin>>iva;
	cout<<"\n";
	
	//calcolo
	pt=p1+p2+p3;
	piva=(pt*pt)/100;
	pl=pt+piva;
	
	//risposta
	cout<<"questo e' il prezzo totale: "<<pt<<endl;
	cout<<"questo e' il prezzo lordo: "<<pl<<endl;
	cout<<"questo e' il prezzo dell'iva: "<<piva<<endl;
	
	system("pause");
	return 0;
}
