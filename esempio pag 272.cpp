#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void riempivettore()
{
	int sx,dx;
	int dato;
	
	srand((unsigned)time(NULL));
	
	sx=0;
	dx=TANTI-1;
	
	while(sx<=dx)
	{
		
		dato=(rand()%MAX)+1;
		
		if(dato%2==0)
		{
			numero[sx]=dato;
		}
		else
		{
			numeri[dx]=dato;
			dx=dx-1;
		}
		
	}
	
}

int main(void)
{
	
	riempivettore();
	visualizzavettore();
	
	system("pause");
}
