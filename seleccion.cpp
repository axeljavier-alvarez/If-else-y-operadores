// AXEL JAVIER GUADALUPE ALVAREZ FELIPE
// https://www.w3schools.com/cpp/cpp_conditions_shorthand.asp
#include <iostream>
using namespace std;
main(){
	// DECLARANDO VARIABLES
	int n1=0, n2=0, n3=0, promedio=0;
	// mensajes
	cout<<"Ingresa Nota 1: ";
	cin>>n1;
	cout<<"Ingresa Nota 2: ";
	cin>>n2;
	cout<<"Ingresa Nota 3: ";
	cin>>n3;
	
	promedio=(n1+n2+n3)/3;
	
	string mensaje="";
	mensaje = promedio>=61 ? "Aprobado" : "Reprobado";
	cout<<"Su promedio es de "<<promedio<<" Por lo tanto: "<<mensaje<<endl;
	
	if(promedio>=0 &&promedio<61){
		cout<<"Mala nota"<<endl;
	}
	if(promedio>=61 && promedio<81){
		cout<<"Buena nota"<<endl;
	}
	if(promedio>=81 && promedio)
	    cout<<"Excelente nota"<<endl;
	/* if(promedio>=61){
		cout<<"Aprobo "<<endl;
	}else {
		cout<<"Reprobado "<<endl;
	} */
	
	
	system("pause");
}
