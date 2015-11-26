/* Busqueda secuencial


*/


#include <iostream>
#include <stdio.h>


using namespace std;

int Buscar (int a[] , int v, int lon);

int main (){



int a[100];
int i,  numero, v;
int lon = 0;

cout<< "Ingrese el numero de elementos"<< endl;
cin>> lon;

cout<< "Ingrese los elementos y toque enter despues de cada uno"<< endl;

for (i=1;i<=lon;i++){
	
	cin>> a[i];
}


cout<< "ingrese el numero que desee buscar" << endl;
cin>> v;


numero =Buscar( a, v , lon);

if (numero >=0){
     
    cout<< "se encunetra el numero en la posicion " << numero <<endl;
}
else

    {cout<< "el numero no se encuentra" << endl;
    
	}

}




int Buscar (int a[] ,  int v , int lon)
{
	int i;
	
	for (i=0; i<lon && a[i] != v; ++i){
	
	
		if (a[i] == v)
	        
	        return i;
	        
	}
	
	return -1;
	
	
}

