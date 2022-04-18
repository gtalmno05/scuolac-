#include <iostream>

using namespace std;

//variabili globali
	int vet[12];

int calcoli();
int leggidati();
int main()
{
	//variabili
	int scelta;
	int medannua;
	int media;
	
	leggidati();
	
	calcoli();
	
	system("pause");
	return 0;
}

int leggidati()
{
	//variabili 
	int i;
	int mese;
	int numpresenze;
	
	for (i=0;i<12;i++)
	{
		
		mese=i;
		
    	switch(mese)
		{
			
			case 0:
				
				cout<<"nel mese di gennaio quante presenze ci sono state: ";
				cin>>numpresenze;
				cout<<"\n";
				
				vet[i]=numpresenze;
				
			break;
			
			case 1: 
			 
			 	cout<<"nel mese di febbraio quante presenze ci sono state: ";
				cin>>numpresenze;
				cout<<"\n";
				
				vet[i]=numpresenze;
				
			break;
			
			case 2: 
			 	
			 	cout<<"nel mese di marzo quante presenze ci sono state: ";
				cin>>numpresenze;
				cout<<"\n";
				
				vet[i]=numpresenze;
				
			break;
			
			case 3: 

			 	cout<<"nel mese di aprile quante presenze ci sono state: ";
				cin>>numpresenze;
				cout<<"\n";
				
				vet[i]=numpresenze;
				
			break;
			
			
			case 4: 

			 	cout<<"nel mese di maggio quante presenze ci sono state: ";
				cin>>numpresenze;
				cout<<"\n";
				
				vet[i]=numpresenze;
				
			break;
			
			case 5: 

			 	cout<<"nel mese di giugno quante presenze ci sono state: ";
				cin>>numpresenze;
				cout<<"\n";
				
				vet[i]=numpresenze;
				
			break;
			
			case 6: 

			 
			 	cout<<"nel mese di luglio quante presenze ci sono state: ";
				cin>>numpresenze;
				cout<<"\n";
				
				vet[i]=numpresenze;
				
			break;
			
			case 7: 

			 	cout<<"nel mese di agosto quante presenze ci sono state: ";
				cin>>numpresenze;
				cout<<"\n";
				
				vet[i]=numpresenze;
				
			break;
			
			case 8: 

			 	cout<<"nel mese di settembre quante presenze ci sono state: ";
				cin>>numpresenze;
				cout<<"\n";
				
				vet[i]=numpresenze;
				
			break;
			
			case 9: 
			 
			 	cout<<"nel mese di ottobre quante presenze ci sono state: ";
				cin>>numpresenze;
				cout<<"\n";
				
				vet[i]=numpresenze;
				
			break;
			
			case 10: 

			 	cout<<"nel mese di novembre quante presenze ci sono state: ";
				cin>>numpresenze;
				cout<<"\n";
				
				vet[i]=numpresenze;
				
			break;
			
			case 11: 

			 	cout<<"nel mese di dicembre quante presenze ci sono state: ";
				cin>>numpresenze;
				cout<<"\n";
				
				vet[i]=numpresenze;
				
			break;
			
		}
		}
	}

int calcoli()
{
    int i;
	int media=0;
	int totest=0;
	int max=0;
	int min=10000;
	int mednoest=0;
	
    for(i=0;i<12;i++)
	{
        media=media+vet[i];
        
        if(i==11)
        {
        	media=media/12;	
   		}
   		
        if(i>=5&&i<=7)
        {
        	totest=totest+vet[i];
        }
        
        if(i<=4||i>=8)
		{
            mednoest=mednoest+vet[i];
        }
        
        if(i==11)
		{
            mednoest=mednoest/9;
        }
        
        if(vet[i>max])
		{
            max=i;
        }
        
        if(vet[i]<min)
		{
            min=i;
        }
    }
    cout<<"Media anno intero: "<<media<<endl;
    cout<<"Numero totale presenze nei mesi estivi: "<<totest<<endl;
    cout<<"Mese con numero di presenza maggiori: "<<max+1<<endl;
    cout<<"Mese con numero di presenza minori: "<<min+1<<endl;
    cout<<"La media delle presenze escludendo l'estate: "<<mednoest<<endl;
}
