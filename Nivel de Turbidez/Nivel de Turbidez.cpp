#include<iostream>
#include<conio.h>
#include<windows.h>

#define USR "proyecto"
#define PASS "123456"


void menu(int ph, int calidad, int ValorTurbidez);

 
 
using namespace std;

int main()
{
	
    int contador=0;
    int valor_ph , porcentajeCalidad, Valorturbidez;
    char usu[20];//usuario
	char con[20]; //contraseña
	// contraseña
    do{
        system("cls");
        system("color 7f");
        cout<<"    UNIVERSIDAD ANTONIO NARIÑO "<<endl;
        cout<<"   PROGRAMACION "<<endl<<endl;       
  		cout<<"INGRESE SU USUARIO"<<endl;
  		cin>>(usu);
   		cout<<"INGRESE SU CONTRASEÑA"<<endl;
   		cin>>(con);
   		
   		if ( (strcmp(con, PASS) == 0) &&(strcmp(usu, USR) == 0)) 
   			{
			cout<<"contaseña y usuario correctos";
				contador =4;
				
				
				
				menu(valor_ph,porcentajeCalidad,Valorturbidez);
   			}	
   		else 
   			cout<<"usuario y/o contraseña incorrectos"<<endl<<endl; 
   			contador ++;
    	
	}while(contador<3);
	
	
	
	
	
}
//menu principal 
void menu(int ph, int calidad, int turbidez)
{
int g;
	do
	{
	system("cls");
	system("color 4f");   
 	cout<<"UNIVERSIDAD ANTONIO NARIÑO"<<endl;
 	cout<<"PROGRAMACION  "<<endl;
 	cout<<" PROYECTO "<<endl<<endl;
 	cout<<"1.	INGRESAR DATOS  "<<endl;
 	cout<<"2.	CONSULTAR CALIDAD DEL AGUA  "<<endl;
 	cout<<"3.	CONSULTAR NEUTRALIDAD DEL AGUA "<<endl;
 	cout<<"4.	CONSULTAR ACIDES DEL AGUA  "<<endl;
 	cout<<"5.	CONSULTAR SI CONSUMIBLE  "<<endl;
 	
 
 	cout<<"9.	salir"<<endl<<endl;
 	cout<<"digite una opcion "<<endl;
 	cin>>g;
 		switch(g)
	   	{
		case 1:
    	    	system("cls");
				system("color 2f");	
				
				cout<<"INGRESAR DATOS"<<endl;
				
				cout<<"Digite el PH del agua (0-14)"<<endl;
				cin>>ph;
				cout<<"Digite el porcentaje de Calidad e Agua ( 0-100%)"<<endl;
				cin>>calidad;
				
				cout<<"Digite el nivel de turbidez"<<endl;
				cin>>turbidez;
				cout<<"Datos Registrados satisfactoriamente"<<endl;
				system("pause");
			
		   		break;
		   
     	case 2:
	   			system("cls");
				system("color 4f");
				cout<<"CONSULTAR CALIDAD DEL AGUA"<<endl;
				
				if(calidad>0 && calidad<=29){
					cout<<"Agua Altamente Contaminada"<<endl;
				}	
				if(calidad>29 && calidad<=49){
					cout<<"Agua Contaminada"<<endl;
				}	
				if(calidad>49 && calidad<=69){
					cout<<"Agua poco Contaminada"<<endl;
				}	
				if(calidad>69 && calidad<=84){
					cout<<"Agua aceptable"<<endl;	
				}	
				if(calidad>84 && calidad<=100){
					cout<<"Agua sin contaminar"<<endl;
				}	
			
				system("pause");
            	break;
		   
		   
    	case 3:
	   			system("cls");
				system("color 5f");
				
				cout<<"CONSULTAR NEUTRALIDAD DEL AGUA"<<endl;
				
				cout<<"Por hacer"<<endl;
				
				system("pause");
	       		break;
   
    	case 4:
			   system("cls");
			   system("color 1e");
			   cout<<"CONSULTAR ACIDES DEL AGUA"<<endl;
				
				if(ph>0 && ph<=6){
					cout<<"El PH es Acido "<<endl;
				}	
				if(ph>6 && ph<=14){
					cout<<"El PH es Basico "<<endl;
				}	
				if(ph == 7){
					cout<<"El PH es Neutro"<<endl;
				}	
				
				system("pause");
			   	
				
			   break;
	    case 5:
				system("cls");
			   system("color f0");
			   
			   	cout<<"CONSULTAR SI ES CONSUMIBLE"<<endl;
			   	if(calidad>84 && ph == 7){
				   cout<<"El agua es consumible :) "<<endl;
			   	}else{
				   cout<<"Tenga cuidado la calidad del agua no es aceptable o el ph muy basico o acido "<<endl;
			   	}
				
				system("pause");
	
			   break;

	    case 9:
	            cout<<" Digite enter para salir  ";
	 	       system("PAUSE");
			   break;
			   
    default : cout<< g <<" opcion no valida ";
    }
	  		   
  }while(g!=9);
}

