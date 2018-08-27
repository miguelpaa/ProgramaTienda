#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
struct tienda{
    int numero;
	char nombre [30];
	float precio;
	int codigo;
	}a[0];

struct almacen {
int existente;
int caducidad;
}b[0];

int main(){
int opcion;
int costo=0;
int nproductos;
int repetir;
    for (int i=0;i<20;i++){
    cout<<"Numero del producto:";
    cin>>a[i].numero;
    cout<<"Nombre del producto:";
	cin.getline (a[i].nombre,30,'\n');
	cin.getline (a[i].nombre,30,'\n');
    cout<<"Precio:";
	cin>>a[i].precio;
	cout<<"codigo de barras:";
	cin>>a[i].codigo;
	cout<<"Productos en existencia:";
	cin>>b[i].existente;
	cout<<"Caducidad:";
	cin>>b[i].caducidad;
	i=i+1;

	}
system("cls");


	for (int i=0;i<20;i++)
{

cout<<"numero:"<<a[i].numero<<"\t nombre:"<<a[i].nombre<<"\t precio:"<<a[i].precio<<endl;
i=i+1;
	}


cout<<"Cuantos articulos desea comprar"<<endl;
cin>>nproductos;
for (int i=0;i<nproductos;i++){
cout<<"Escribe el numero de articulo que deseas comprar"<<endl;
cin>>opcion;
cout<<"Cuantas veces deseas repetir este articulo"<<endl;
cin>>repetir;

for (int i=0;i<20;i++){
if (opcion == a[i].numero){
        if (repetir>b[i].existente){
            cout<<"No contamos con suficientes productos escriba  una cantidad menor a"<<b[i].existente<<endl;
            cout<<"Cuantas veces desea repetir el producto"<<endl;
            cin>>repetir;
        }


    costo= costo+(a[i].precio*repetir);


	}

	}}
	cout<<endl;
	cout<<"**********************************************"<<endl;
	cout<<"          El costo total es:"<<costo<<endl;
	cout<<"**********************************************"<<endl;
return 0;
}
