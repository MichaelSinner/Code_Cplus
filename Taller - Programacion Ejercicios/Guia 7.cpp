#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
struct Estudiante
	{
       char nombre[25];
       int codigo;
       int id;
       char carrera[25];
       double notaClase;
       double notaTaller;
       double notaParcial;
       double notaProyecto;
       double notaDefinitiva;
       
	}estudiantes[20];

double notaFinal(Estudiante e){
	return ((0.2)*e.notaClase+(0.2)*e.notaTaller+(0.3)*e.notaParcial+(0.3)*e.notaProyecto);
}
void lecturaDatos()
{
	cout<<"****************************** Lectura de datos ************************"<<endl;
	for(int i =0 ; i< 3;i++)
    {
		cout<<"Estudiante Numero "<<i+1<<endl;
    	
		cout<<"Nombre :";
		cin>>estudiantes[i].nombre;
		cout<<"Codigo :";
		cin>>estudiantes[i].codigo;
		cout<<"ID :";
		cin>>estudiantes[i].id;
		cout<<"Carrera:";
		cin>>estudiantes[i].carrera;
		cout<<"Nota Clase :";
		cin>>estudiantes[i].notaClase;
		cout<<"Nota Taller :";
		cin>>estudiantes[i].notaTaller;
		cout<<"Nota Parcial :";
		cin>>estudiantes[i].notaParcial;
		cout<<"Nota Proyecto :";
		cin>>estudiantes[i].notaProyecto;
	}
	
}
void imprimirEstudiantes()
{
			system("cls");
            cout<<"********************** Lista de estudiantes ********************************";
            for(int i=0 ;i<3;i++)
			{
            cout<<"Estudiante Numero "<<i+1<<endl;
    		cout<<"Nombre :"<<estudiantes[i].nombre<<endl;
			cout<<"Codigo :"<<estudiantes[i].codigo<<endl;
			cout<<"ID :"<<estudiantes[i].id<<endl;
			cout<<"Carrera:"<<estudiantes[i].carrera<<endl;
			cout<<"Nota Definitiva :"<<estudiantes[i].notaDefinitiva<<endl;  
			   
            }
            system("pause");
}
void listaAprovados()
{
            system("cls");  
            cout<<"********************** Lista Aprobados ********************************";
            for(int i=0 ;i<3;i++){
				if(estudiantes[i].notaDefinitiva>=3)
				{
					
					cout<<"Nombre :"<<estudiantes[i].nombre<<endl;
					cout<<"Nota Definitiva :"<<estudiantes[i].notaDefinitiva<<endl;  
				}
			}

            cout<<" "<<endl;
            system("pause");                    
}


int main(){
    
	
	
	int seleccion=0;
   

       cout<<"****************************** Menu Principal 	***************************"<<endl;
       cout<<" "<<endl;
       
	lecturaDatos();	   
	   

       
    do{
  	   cout<<"****************************** Menu Principal 	***************************"<<endl;
       cout<<endl;
       cout<<" 1. Lista de Estudiantes"<<endl;
       cout<<" 2. Lista Aprobados"<<endl;
       cout<<" 3.  Lista reprobados"<<endl;
       cout<<" 4.  Aprobados pero reprobo parcial  y Reprovados pero aprobaron parcial"<<endl;
       cout<<" 5. Salir."<<endl;
       cout<<endl;
       cout<<("Elija una opcion por favor:  ");
       cin>>seleccion;
       

    switch(seleccion){
         case 1:
            imprimirEstudiantes();
            break;
         case 2:
         	listaAprovados();
            break;
         case 3:
            system("cls");
            cout<<"********************** Lista reprobados ********************************"<<endl;
            
            for(int i=0 ;i<3;i++){
				if(estudiantes[i].notaDefinitiva<3)
				{
					cout<<"Nombre :"<<estudiantes[i].nombre<<endl;
					cout<<"Nota Definitiva :"<<estudiantes[i].notaDefinitiva<<endl;  
				}
			}cout<<" "<<endl;
            system("pause");                    
            break;
            
            case 4:
            system("cls");
            cout<<"****************** Aprobados pero reprobo parcial ***********************"<<endl;
            for(int i=0 ;i<3;i++){
				if(estudiantes[i].notaDefinitiva>3&&estudiantes[i].notaParcial<3)
				{
					cout<<"Nombre :"<<estudiantes[i].nombre<<endl;
					cout<<"Nota parcial :"<<estudiantes[i].notaParcial<<endl;  
					cout<<"Nota Definitiva :"<<estudiantes[i].notaDefinitiva<<endl;  
				}
			}cout<<" "<<endl;
            
            cout<<"****************** reprobados pero aprobo parcial ***********************"<<endl;
            for(int i=0 ;i<3;i++){
				if(estudiantes[i].notaDefinitiva<3&&estudiantes[i].notaParcial>3)
				{
					cout<<"Nombre :"<<estudiantes[i].nombre<<endl;
					cout<<"Nota parcial :"<<estudiantes[i].notaParcial<<endl;  
					cout<<"Nota Definitiva :"<<estudiantes[i].notaDefinitiva<<endl;  
				}
			}cout<<" "<<endl;
			
            cout<<" "<<endl;
            system("pause");                                     
            break;
         }              
         system("cls");
    }while(seleccion!=5);
    
    
}
