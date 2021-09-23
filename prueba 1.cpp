#include"iostream"
#include"cmath"

using namespace std;

int main (){
	float ca, co, re;
	int option; 
	do {
		cout << "opción 1 desea calcular la hipotenusa del triangulo rectagulo" <<"\n";
		cout << "opción 2 salir" <<"\n";
		cin >> option;
		switch (option){
		case 1: 
		
		do { 
		cout << "Ingrese las medidas de los catetos adyacento y opuesto" <<"\n";
		cout << "Ingrese el cateto opuesto" <<"\n";
		cin >> co;
		cout << "Ingrese el cateto adyacente"  <<"\n";
		cin >> ca;
		if (co > 0 && ca > 0 ){
		
		re = sqrt (pow(co,2.0)+pow(ca,2.0));
		cout << "La hipotenusa de su triangulo rectagulo es: " << re << "\n";
		
		}
		else {
		cout << "Los numeros que ingrese deben ser positivos mayor a 0" << "\n";
		
		}
		
		}while(co < 0 && ca < 0); 
		break; 
		case 2:
			break;
			default:
			cout << "Opcion no valida" << "\n";
			
		    
		}
		
	} while (option !=2);
}