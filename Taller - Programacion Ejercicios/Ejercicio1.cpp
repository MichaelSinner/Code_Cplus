#include <stdio.h>
#include <iostream>

using namespace std;

struct empleado
{
       char nombre_empleado[25];
       char apellido_empleado[25];
       int edad;
       char sexo[10];
       double sueldo;
}empleados[3];

int main(){
    
    for(int i =0 ; i< 3;i++)
    {
    	cout<<"Empleado Numero "<<i+1<<endl;
    	
		cout<<"Nombre :";
		cin>>empleados[i].nombre_empleado;
		cout<<"Apellido :";
		cin>>empleados[i].apellido_empleado;
		cout<<"Edad :";
		cin>>empleados[i].edad;
		cout<<"Sexo :";
		cin>>empleados[i].sexo;
		cout<<"Sueldo :";
		cin>>empleados[i].sueldo;
		
	//	s
         
    }
    
    
    int mayor_Sueldo = 0;
    int menor_Sueldo = 0;
    double auxiliarSueldoMinimo = 0;
    double auxiliarSueldoMaximo = 10000000000;
	
	for(int i =0 ; i< 3;i++)
    {
    	if(empleados[i].sueldo>auxiliarSueldoMinimo)
		{
			mayor_Sueldo = i;
			auxiliarSueldoMinimo = empleados[i].sueldo;
    	}else if(empleados[i].sueldo<auxiliarSueldoMaximo)
		{
			menor_Sueldo = i;
			auxiliarSueldoMaximo = empleados[i].sueldo;	
    	}
    	
    }
    cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  "<<endl;
    cout<<"El empleado con mas sueldo es :"<<endl;
    cout<<empleados[mayor_Sueldo].nombre_empleado;
	cout<<empleados[mayor_Sueldo].apellido_empleado<<endl;
	cout<<empleados[mayor_Sueldo].edad<<endl;
    cout<<empleados[mayor_Sueldo].sueldo<<endl;
    
	cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  "<<endl;
    cout<<"El empleado con menos sueldo es :"<<endl;
    cout<<empleados[menor_Sueldo].nombre_empleado<<endl;
    cout<<empleados[menor_Sueldo].apellido_empleado<<endl;
	cout<<empleados[menor_Sueldo].edad<<endl;
    cout<<empleados[menor_Sueldo].sueldo<<endl;
    
    
    
    
    
    
    return 0;

    
    }
