#include <iostream>

using namespace std;

//variabili
int v[20];

int sentinella();
int bubblesort();
int mostravettore();
int riempivettore();
int main()
{
	
	riempivettore();
	mostravettore();	
	bubblesort();
	
	cout<<"\n";
	cout<<"\n";
	
	sentinella();
	
}

int riempivettore()
{
	//variabili
	int i;
	int n;
	
	for(i=0;i<20;i++)
	{
		
		cout<<"Inserisci il "<<i+1<<" numero: ";
		cin>>n;
		cout<<"\n";
		
		v[i]=n;
		
	}
	
}

int mostravettore()
{
	//variabili 
	int i;
	
	for(i=0;i<20;i++)
	{
		
		cout<<v[i]<<" ";
		
	}
		
}

int bubblesort()
{	
	//variabili	
	int i;
	int x;
	int vt;
	
	for(i=0;i<20;i++)
	{
		for(x=0;x<20;x++)
		{
			if(v[x]>v[x+1])
			{
				vt=v[x];
				v[x]=v[x+1];
				v[x+1]=vt;
			}
		}
	
	}	
		
}

int sentinella()
{
	//variabili
	int i;
	int temp;
	bool scambio = false;
	
	do
	{
		scambio=false;
		
		for(i=0;i<20;i++)
		{
			if(v[i]>v[i+1])
			{
				
				temp=v[i];
				v[i]=v[i+1];
				v[i+1]=temp;
				scambio=true;
				
			}
		}
		
		mostravettore();
	}while(scambio==true);
}
