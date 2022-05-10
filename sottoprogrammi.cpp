int	matrice()
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
