/* Busqueda binaria



*/


# include <iostream>

using namespace std;

int Buscar (int a[], int v , int lon);



int main () {
	
int a[100];
int v , lon , numero;

cout<< "Ingrese el numero de elementos"<< endl;
cin>> lon;

cout<< "Ingrese los elementos y toque enter despues de cada uno"<< endl;

 for (int i=1;i<=lon;i++){
     
	 
	 cin>> a[i];
 
 
 }
	
	cout<< "ingrese el numero que desee buscar" << endl;
     cin>> v;
     
     
     numero = Buscar( a, v , lon);
     
     
     if (numero >=0){
     
    cout<< "se encunetra el numero en la posicion " << numero <<endl;
     }
    else
    {cout<< "el numero no se encuentra" << endl;
    
	}

}

	
	
int Buscar (int a[], int v , int lon){
	
	int beg =1;
	int end = lon;
	
	int mid = (beg + end) / 2;
	
	while (beg <= end && a[mid] != v){
	
	      
	      
	      if (a[mid] < v){
		  
	      
	         beg= mid + 1;
	     }
	       else
		   {
		   
              end=mid -1;
		}
	mid=(beg + end) / 2;
				     
	
	
}

    return mid;
}	
	
	

