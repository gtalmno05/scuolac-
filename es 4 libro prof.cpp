#include <iostream>

using namespace std;

	//variabili globali
	double const tariffabase=5.95;
	double const tariffaxraccolta=0.04;
	double const iva=10;
	double const litrixpersona=90;

int imponibileconiva(double &ivatot,double imp);
int imponibile(double &imp,double tariffabasetot,double litrixpersonatot );
int tarxraccolta(int numpersone,double &litrixpersonatot,double &totl);
int tarbase(int numpersone,double &tariffabasetot);
int leggidati(int &numpersone);	
int main()
{
	//variabili
	int numpersone;
	double ivatot;
	double tariffabasetot;
	double totl;
	double litrixpersonatot;
	double imp;
	
	leggidati(numpersone);
	tarbase(numpersone,tariffabasetot);
	tarxraccolta(numpersone,litrixpersonatot,totl);
	imponibile(imp,tariffabasetot,litrixpersonatot);
    imponibileconiva(ivatot,imp);
	
	cout<<"L'imponibile e':"<<imp<<" euro "<<endl;
	cout<<"Il tot con l'iva e': "<<ivatot<<" euro "<<endl;
	
}

int leggidati(int &numpersone)
{
	
	cout<<"Inserisci il numero di persone: ";
	cin>>numpersone;
	cout<<"\n";
	
}

int tarbase(int numpersone,double &tariffabasetot)
{
	
	tariffabasetot=numpersone*tariffabase;
	
}

int tarxraccolta(int numpersone,double &litrixpersonatot,double &totl)
{
	
	totl=numpersone*litrixpersona;
	litrixpersonatot=totl*tariffaxraccolta;
	
}

int imponibile(double &imp,double tariffabasetot,double litrixpersonatot )
{
	
	imp=tariffabasetot+litrixpersona;
	
}

int imponibileconiva(double &ivatot,double imp)
{
	
	ivatot=(imp*iva)/100;
	ivatot=ivatot+0.085;
	
}
