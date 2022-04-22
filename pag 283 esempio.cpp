#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//variabili globali
int v[10];

int riempivettore();
int mostravettore();
int bubblesort();
int main()
{

	riempivettore();
	mostravettore();
	bubblesort();
	cout<<"----------------------------------------------";
	cout<<"\n";
	mostravettore();
	
}

int riempivettore()
{
	//variabili
	int i;
	srand(time(NULL));
	
	for(i=0;i<10;i++)
	{
		v[i]=rand()%100;
	}
	
	
}

int mostravettore()
{
	//variabili 
	int i;
	
	for(i=0;i<10;i++)
	{
		
		cout<<"["<<i<<"]"<<" "<<v[i]<<endl;
		
	}
	
		
}

int bubblesort()
{
		
	int i;
	int x;
	int vt;
	
	for(i=0;i<10;i++)
	{
		for(x=0;x<10;x++)
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
