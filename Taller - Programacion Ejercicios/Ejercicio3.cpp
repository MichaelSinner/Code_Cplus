#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;


int main(){
    
    
	 int i=0, opcion,edad,auxiliar;
	 char letra;
	 
	 while(i<50)
    	{
    	cout<<"Persona Numero "<<i+1<<endl;
    	cout<<"Nombre :";
    	cin>>personas[i].nombre;
		cout<<"Direccion :";
		cin>>personas[i].direccion;
		cout<<"Edad :";
		cin>>personas[i].edad;
		cout<<"Telefono :";
		cin>>personas[i].telefono;
		cout<<" - - - - -  - - - - - - - "<<endl;
		
		cout<<"Desea continuar si(s) no(n)"<<endl;
		char cont;
		cin>>cont;
		
		if(cont=='s'){
			i++;
		}else{
			auxiliar=i;
			i=50;
		}
			system("cls");
    
	}	
		system("cls");
		do
          {
          cout<<"Escoja una opcion:"<<endl;
          cout<<"1.-Mostrar la lista de todos los nombres."<<endl;
          cout<<"2.-Mostrar las personas de la edad que se indique."<<endl;
          cout<<"3.-Mostrar las personas cuyo nombre empiece con la letra que se indique."<<endl;
          cout<<"4.-Salir del programan"<<endl;
          scanf("%d", &opcion);
          switch (opcion)
                 {
                 case 1:/*Muestra todos los nombres*/
                        for (int j=0; j<=auxiliar; j++)
                            cout<<personas[j].nombre<<endl;
                        system("pause");
                        break;
                 case 2:/*Muestra las personas de una cierta edad*/
                        printf("nEscriba la edad que tienen las personas que quiere ver: ");
                        scanf("%d", &edad);
                        for (int j=0; j<=auxiliar; j++)
                            if (personas[j].edad==edad) cout<<personas[j].nombre<<endl;
                        system("pause");
                        break;
                 case 3:/*Muestra las personas con la inicial que se indique*/
                        printf("Escriba la inicial: ");
                        cin>>letra;
                        for (int j=0; j<=auxiliar; j++)
                         if (letra==personas[j].nombre[0]) cout<<personas[j].nombre<<endl;
                        system("pause");
                        break;
 
                 case 4:/*Sale del programa*/
                        printf("Fin del programa, pulse Intro para cerrar");
                        getchar();
                        getchar(); 
                        break;
                 }
          }
          while (opcion!=4);
    
   
    
    return 0;

    
    }
