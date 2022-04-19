#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	//variabili
	int v[6];
	int s1;
	int s2;
	int i;
	int i2;
	
	//calcoli
	srand(time(NULL));
	
	for(i2=0;i2<10;i2++)
	{
	for(i=0;i<3;i++)
	{
		v[i]=rand()%10;
		cout<<"\n"<<v[i]<<endl;
	}
	
		for(i=6;i>3;i--)
	{
		v[i]=rand()%10;
		cout<<"\n"<<v[i]<<endl;
	}
	
	if(v[0]+v[1]+v[2]==v[3]+v[4]+v[5])
	{
		
		cout<<"Buona giornata"<<endl;
		
	}
	
	cout<<"fine biglietto";

	}
	
	cout<<"\n";
	
	system("pause");
	return 0;
}
