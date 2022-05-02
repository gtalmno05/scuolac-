#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//variabili globali
const int tanti=10;
int v[tanti];
int vpos[tanti];
int vneg[tanti];

int nspostamento();
int mostravettorepos();
int mostravettoreneg();
int riempivettore();
int mostravettore();
int bubblesortpos();
int bubblesortneg();
int main()
{
	
	riempivettore();
	mostravettore();
	nspostamento();
	cout<<"\n";
	cout<<"--------";
	cout<<"\n";
	bubblesortpos();
	cout<<"numeri positivi: ";
	cout<<"\n";
	mostravettorepos();
	cout<<"\n";
	cout<<"--------";
	cout<<"\n";
	bubblesortneg();
	cout<<"numeri negativi: ";
	cout<<"\n";
	mostravettoreneg();
	
}

int nspostamento()
{
	//variabili 
	int i;
	
		for(i=0;i<10;i++)
	{
		if(v[i]>0)
		{
			vpos[i]=v[i];
		}
		else
		{
			vneg[i]=v[i];
		}
	}
}

int riempivettore()
{
	//variabili
	int i;
	int min;
	int max;
	int n;
	
	srand(time(NULL));
	
	for(i=0;i<tanti;i++)
	{
		max=rand()%20;
		min=rand()%20;
		n=(max-min);
		v[i]=n;
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

int mostravettorepos()
{
	//variabili 
	int i;
	
	for(i=0;i<tanti;i++)
	{
		if(vpos[i]>0)
		{
		  cout<<v[i]<<" ";	
		}
	}	
}

int mostravettoreneg()
{
	//variabili 
	int i;
	
	for(i=0;i<tanti;i++)
	{
		if(vneg[i]!=0)
		{
		  cout<<v[i]<<" ";	
		}
	}	
}

int bubblesortpos()
{	
	//variabili	
	int i;
	int x;
	int vt;
	
	for(i=0;i<tanti;i++)
	{
		for(x=0;x<tanti;x++)
		{
			if(vpos[x]>vpos[x+1])
			{
				vt=vpos[x];
				vpos[x]=vpos[x+1];
				vpos[x+1]=vt;
			}
		}
	}		
}
int bubblesortneg()
{	
	//variabili	
	int i;
	int x;
	int vt;
	
	for(i=0;i<tanti;i++)
	{
		for(x=0;x<tanti;x++)
		{
			if(vneg[x]>vneg[x+1])
			{
				vt=vpos[x];
				vneg[x]=vneg[x+1];
				vneg[x+1]=vt;
			}
		}
	}		
}
