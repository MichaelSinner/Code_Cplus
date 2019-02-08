#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

struct Jugador{
	char nombre[25];
    char equipo[25];
	int partidosJugados;
	int cantidadGoles;
	double promedioGoles;
       
}jugadores[3];

double calcularPromedioGoles(int numeroPartidos , int cantidadGoles);

void lecturaDatos()
{
	cout<<"****************************** Lectura de datos ************************"<<endl;
	for(int i =0 ; i< 3;i++)
    {
		cout<<"Jugador Numero "<<i+1<<endl;
    	
		cout<<"Nombre Jugador:";
		cin>>jugadores[i].nombre;
		cout<<"Equipo al que juega:";
		cin>>jugadores[i].equipo;
		cout<<"Cantidad de partidos jugados :";
		cin>>jugadores[i].partidosJugados;
		cout<<"Cantidad de Goles anotados :";
		cin>>jugadores[i].cantidadGoles;
		
		jugadores[i].promedioGoles = calcularPromedioGoles(jugadores[i].partidosJugados , jugadores[i].cantidadGoles);
	}
	
}

void imprimirEstudiantes()
{
			system("cls");
            cout<<"********************** Lista de Jugadores ********************************";
            for(int i=0 ;i<3;i++)
			{
            cout<<"Jugador Numero "<<i+1<<endl;
    		cout<<"Nombre Jugador:"<<jugadores[i].nombre<<endl;
    		cout<<"Nombre del equipo donde juega :"<<jugadores[i].equipo<<endl;
			cout<<"Partidos Jugados:"<<jugadores[i].partidosJugados<<endl;
			cout<<"Goles anotados:"<<jugadores[i].cantidadGoles<<endl;
			cout<<"Promedio de Goles:"<<jugadores[i].promedioGoles<<endl;
			
			   
            }
            system("pause");
}

double calcularPromedioGoles(int numeroPartidos , int cantidadGoles){
	double promedio;

	promedio = cantidadGoles/numeroPartidos;
	
	return promedio;
}

int main(){
	
	lecturaDatos();
	imprimirEstudiantes();

	return 0;
}


