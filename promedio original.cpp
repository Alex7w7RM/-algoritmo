#include "iostream"
#include "string"

using namespace std;

int main(){
	 float a,b,c,pro;// declaracion de variables
	 char nombre [30];// declaracion de varibale nombre
	 
	 cout<< "Ingrese su nombre" << "\n";// mensaje en pantalla
	 cin>> nombre; //ingresar nombre
	 
	 cout<< "ingresar primera nota" << "\n";//mensaje en pantalla
	cin>> a;// ingresar primera nota
	 
	 cout<< "ingresar segunda  nota" << "\n";
	 cin>>b;// ingresar segunda nota
	 
	 cout<< "ingresar tercera nota" << "\n";
	 cin>>c; //ingresar tercera nota
	 
	 pro=(a+b+c)/3 ;// procedimiento para el resultado
	 
	 cout<< "El promedio del estudiante " << nombre << " el promedio obtenido es de " << pro << "\n"; // muestra los resultados de las notas junto al nombre del estudiante
	 
}