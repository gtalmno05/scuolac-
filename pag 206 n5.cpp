#include <iostream>

using namespace std;

int main(void)
{
	//variabili
	int num;
	int scelta;
	
	//input dati
	cout<<"inserisci: 0 se vuoi fare il calcolo di coppie di numeri consecutivi uguali \n1 se vuoi fare il calcolo di coppie in cui il secondo numero e divisore del primo (non uguali) \n2 se vuoi fare visualizzare un messaggio in cui dica quale tipo di coppie tra le due tipologie indicate  e' presente in un numero maggiore ";
	cin>>scelta;
	cout<<"\n";
	
	//calcolo
	switch (scelta)
	{
		case 0:
			
			n= leggidati();
			
			break;
			
		case 1:
			
	    
			
			break;
		
	  case 2:
		
		  
		
			break;	
	}
	
	
	
}

int leggidati()
{
	//variabili
	int n;
	
	//input dati
	n=0;
	do
	{
	cout<<"inserisci un numero:";
	cin>>n;
	}while(n!=0);
	return n;
}

