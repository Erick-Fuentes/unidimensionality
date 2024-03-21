#include <iostream>
using namespace std;

main() {
	int tam=0;
	cout<<"Cuantas notas desea ingresar:";
	cin>>tam; // 5
	int notas[tam];
	 for(int i=0;i<tam;i++){
	 	cout<<"Ingrese Nota "<<i<<":";
	 	cin>>notas[i];
	 }
	 
	 for(int i=0;i<tam;i++){
	 	cout<<notas[i]<<endl;
	 }
	
	
	
	system("pause");
}
