#include <iostream>
using namespace std;

main() {
	int tam=0, suma=0,promedio=0;
	cout<<"Cuantas notas desea ingresar: ";
	cin>>tam;
	int notas[tam];
	for (int i=0;i<tam;i++){
		cout<<"Ingrese Nota "<<i+1<<":";
		cin>>notas[i];
	}
		
	for (int i=0;i<tam;i++){
		suma += notas[i];
		
	}	
	promedio = suma / tam;
	cout<<"El promedio es: "<<promedio<<endl;
	
	system("pause");
}
