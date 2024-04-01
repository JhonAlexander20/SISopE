
#include<iostream>
   //Punteros
using namespace std;

main(void){
	//declaramos una varible denmominada "x" de tipo entero
	int x;
	x=8; //asignamos un 8 valor de "x" pero no hacemos  nada con el
	
		//declartamos un puntero a int
	
	int *ptr;
	ptr=&x;   //mostramos la direccion de "x" en el puntero
	
	cout<<"la direccion de X es: "<<&x; //mostramos la direccion de x, algo cojmo 0x6ffe14
	cout<<endl; // salto de linea
	cout<<"el valor del ptr es: "<<ptr; // mostramos el valor del puntero, esto es 0x8ffe14
	count<<endl;//salto de linea
	cout<<"la direcion del puntero es:"<<&ptr;//el puntero  como tal tambien tiene su direccion
	//de memoria  y aqui la mostramos algo como 0x6ffe00
	
	
	
	}
