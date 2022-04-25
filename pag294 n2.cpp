#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//variabili globali
const int tanti=10;
int v[tanti];


int vettoresenzadoppi();
int riempivettore();
int mostravettore();
int bubblesort();
int main()
{

	riempivettore();
	mostravettore();
    vettoresenzadoppi();
	cout<<"\n";
	cout<<"--------";
	cout<<"\n";
	bubblesort();
	mostravettore();
	
}

int riempivettore()
{
	//variabili
	int i;
	srand(time(NULL));
	
	for(i=0;i<tanti;i++)
	{
		v[i]=rand()%100;
	}
	
	
}

int mostravettore()
{
	//variabili 
	int i;
	
	for(i=0;i<tanti;i++)
	{
		
		cout<<v[i]<<" ";
		
	}
		
}

int vettoresenzadoppi()
{
	
	//variabili 
	int i;
	int c;
	
	for(i=0;i<tanti;i++)
	{
		for(c=i+1;c<tanti;c++)
		{	
			if(v[i]==v[c])
			{
				v[c]=0;
				v[i]=0;
				break;	
			}	
		}
	}
	
}

int bubblesort()
{	
	//variabili	
	int i;
	int x;
	int vt;
	
	for(i=0;i<tanti;i++)
	{
		for(x=0;x<tanti;x++)
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
