#include <iostream>
using namespace std;
int ugual(int a, int b);
int div(int a, int b);
int max(int a, int b);
int main (void){
	int a,b,uguali,divisore,maggiore;
	char menu;
	do{
		cout<<"Inserisci un numero: \t";
		cin>>a;
		cout<<"Inserisci un numero: \t";
		cin>>b;
		uguali= ugual(a,b);
		divisore= div(a,b);
		maggiore= max(a,b);
	}while(a!=0&&b!=0);
	cout<<"Inserire la lettera 'a' se si vuole visualizzare il calcolo del numero di coppie di numeri consecutivi uguali, inserire 'b' se si vuole visualizzare il calcolo di coppie in cui il secondo numero è divisore del primo(non uguali) o inserire 'c' se si vuole sapere il numero di coppie presenti in maggioranza: \t";
	cin>>menu;
		switch (menu){
			case 'a':
				cout<<"numero di coppie di numeri consecutivi uguali: \t"<<uguali;
				
				break;
			case 'b':
				
				break;
			case 'c':
				
				break;
		}
		return 0;
}
int ugual(int a, int b)
{
	int i;
	if(a==b)
	i=i+1;
	ugual=i;
	return ugual;
}

