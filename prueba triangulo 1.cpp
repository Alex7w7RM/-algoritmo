//*5. desarrolle un programa que permita calcular la hipotenusa de un triangulo rectangulo./

#include "iostream"
#include "cmath"


using namespace std;

int main(){ //cuerpo del programa
	float num1, num2, resu1; // declaracion de variables
	int opc1;
	
	do{
		
		cout<< "1. calcular hipotenusa" << "\n";
		cout<< "2. salir" << "\n";
		cin>> opc1;
		
		switch (opc1){
			case 1:
				do{
					cout<< " escriba la medida de los catetos" << "\n";
					cout<< "primer cateto:" << "\n";// mensaje en pantalla
					cin>> num1; // primer valor a ingresar
					cout<< "segundo cateto" << "\n";// mensaje en pantalla
					cin>> num2;//segundo valor a ingresar
					
					if ( num1 > 0 && num2 > 0){ 	resu1 = sqrt (pow(num1, 2.0)+ pow(num2,2.0)); //formula.
					cout<< "El resultado de la hipotenusa es:" << resu1 << "\n";  
					}
				
					
					else{ // si los catetos son negativos se produce un error
					cout<< "se a producido un error los valores deben ser positivos" << "\n"; // mensaje en pantalla, si los catetos son negativos.
				 
				}
				
				}while ( num1 <=0  & num2 <=0);
				break;
				 
				 	case 2: // si escoge la opcion 2 se cierra el programa
					break;
					
					default:
						cout<<"opcion invalida"<< "\n";	// mensaje en patalla 
				
				} 
		} while (opc1 !=2);
	}