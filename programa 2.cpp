
#include<iostream>

using namespace std;

main(void){
	
	// este programa muestra el resultado a traves de la consola para solicitar 2 numeros y mostrar el resultado de las 4 operaciones
	double num1;
	double num2;
	double resultado;
	double resta;
	double suma;
	double division;
	
	cout<<"igrese un numero:";
	cin>>num1;
	
	cout<<"igrese un numero:";
	cin>>num2;
	
	resultado=num1*num2;
	suma=num1+num2;
	resta=num1-num2;
	division=num1/num2;
	
	cout<<"la multiplicacion es: "<<resultado<<endl;
	cout<<"la suma es: "<<suma<<endl;	
	cout<<"la resta es: "<<resta<<endl;
	cout<<"la division es: "<<division<<endl;
	
	
}
