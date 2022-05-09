#include <iostream>

using namespace std;

//variabili globali 
int v [10] [10];

int	riempiriga();
int	mostravettore();
int riempicolonna();
int main()
{
	
	riempicolonna();
	riempiriga();
	mostravettore();
	
}

int riempicolonna()
{
	//variabili
	int i;
	
	for(i=0;i<10;i++)
	{
		v[i] [0]=i+1;
	}
}

int riempiriga()
{
	//variabili
	int i;
	int x;
	
	for(x=0;x<10;x++)
	{
		for(i=0;i<10;i++)
		{
			
			v[i][x]=(i+1)*(x+1);
			
		}
	}
	
}

int	mostravettore()
{
	//variabili
	int i;
	int x;
	
	for(x=0;x<10;x++)
	{
		for(i=0;i<10;i++)
		{
			cout<<v[x][i]<<"\t";
		}
	}
}
