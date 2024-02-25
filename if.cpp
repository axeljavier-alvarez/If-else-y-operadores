// AXEL ALVAREZ
#include <iostream>
using namespace std;
main(){
	
	// numero es positivo o negativoo
	/* int num=0;
	cout<<"Ingrese el Numero: ";
	cin>>num;
	if(num>0){ // >0
		cout<<"Positivo"<<endl;
	}else { // <=0
		// anidar estructuras
		if(num==0){ //0
			cout<<"Neutro"<<endl;
				} else {// <0
					cout<<"Negativo"<<endl;	
				}
	} */
	
	// numero es positivo>0 o negativo<0
	/* string pais="";
	cout<<"Ingrese el pais ";
	cin>>pais;
	if(pais=="guatemala"){
		cout<<"yo soy de "<<pais<<" mi pais"<<endl;
	}else {
		cout<<pais<<endl;
	} */
	
	// Determinar si un numero es par o impar
	/* int num=0;
	cout<<"Ingrese Numero : ";
	cin>>num;
	// dividir un numero entre dos su residuo es cero entonces es par
	// caso contrario es impar
	if((num%2)==0){
		cout<<"Par"<<endl;
	} else {
	
	// VERIFICACIONES DE VERDADEROS
	// and (y) && >AMBOS VALORES VERDADEROS
	// or (o) || AUNQUE SEA UN VALOR PARA QUE SEA VERDADERO TODO
		cout<<"Impar"<<endl;
	} */
	/* char lapiz,lapicero, cuaderno;
	cout<<"Trae Lapiz (s/n): ";
	cin>>lapiz;
	cout<<"Trae lapicero (s/n): ";
	cin>>lapicero;
	cout<<"Trae cuaderno (s/n): ";
	cin>>cuaderno; */
	
	// EN ESTE IF SI TIENE QUE TRAER AMBOS PARA ENTRAR POR EL OPERADOR LOGICO
	/* if(lapiz=='s' && lapicero =='s'){
		cout<<"Ingresa"<<endl;
	} else {
		cout<<"Lo siento no puede Ingresar"<<endl;
	} */
	
	// EN ESTE IF SI UNA ES VERDADERA ENTRA
	
	/* if(lapiz=='s' || lapicero=='s'){
		cout<<"Puede ingresar bienvenido"<<endl;
		
	} else {
		cout<<"Lo siento no puede Ingresar"<<endl;
	} */
	
	// AQUI SI ES OBLIGATORO TRAER CUADERNO
	
	/*  if((lapiz=='s' || lapicero=='s')&&cuaderno=='s'){
		cout<<"Puede ingresar bienvenido"<<endl;
		
	} else {
		cout<<"Lo siento no puede Ingresar"<<endl;
	} */
	
	int codigo=0;
	cout<<"Ingrese codigo de area: ";
	cin>>codigo;
	
	switch(codigo){
		case 501 :
			cout <<"Belice "<<endl;
			break;
		case 502 :
			cout <<"Guatemala "<<endl;
			break;
			case 503 :
			cout <<"El Salvador "<<endl;
			break;
			case 504 :
			cout <<"Honduras "<<endl;
			break;
			case 505 :
			cout <<"Nicaragua "<<endl;
			break;
			case 506 :
			cout <<"Costa Rica "<<endl;
			break;
			case 507 :
			cout <<"Panama "<<endl;
			break;
		default:
			cout <<"Este codigo no es de centroamerica"<<endl;
	}
	// NO SE UTILIZA IF PARA LA MISMA VARIABLE
	/* if(codigo==502){
		cout<<"Guatemala"<<endl;
		
	}
	if(codigo==503){
		cout<<"El Salvador"<<endl;
	}
	if(codigo==504){
		cout<<"Honduras"<<endl;
	}
	if(codgo==505){
		cout<<"Nicaragua"<<endl;
	} */
	
	
	system("pause");
}
