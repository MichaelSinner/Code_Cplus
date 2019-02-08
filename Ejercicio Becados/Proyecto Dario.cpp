#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int seleccion=0;
    int numeroRegistros = 0;
    int contadorRegistros = 0;

       cout<<"****************************** Menu Principal 	***************************"<<endl;
       cout<<" "<<endl;
       cout<<("Cuantos registros va a manejar:  ");      
       cin>>numeroRegistros;
       cout<<endl;
       system("cls");


       char nombres[numeroRegistros-1][20];
       int array[numeroRegistros*3];

       
    do{
  	   cout<<"****************************** Menu Principal 	***************************"<<endl;
       cout<<endl;
       cout<<" 1. Cargue de Datos"<<endl;
       cout<<" 2. Becados para U. Nacional"<<endl;
       cout<<" 3. Becados para U. Andes"<<endl;
       cout<<" 4. No Becados para U. Andes, U Nacional"<<endl;
       cout<<" 5. Salir."<<endl;
       cout<<endl;
       cout<<("Elija una opcion por favor:  ");
       cin>>seleccion;
       

    switch(seleccion){
         case 1:
            system("cls");
            cout<<"********************** Cargar datos ********************************";
            for(int i=contadorRegistros, j=0;i<numeroRegistros;i++,j=j+3){
                cout<<endl;
                cout<<"Registro numero "<<contadorRegistros+1<<endl;        
                cout<<"- Nombre del estudiante : ";
                cin>>nombres[i];
                cout<<"- Edad del estudiante : ";
                cin>>array[j];
                cout<<"- Puntaje ICFES : ";
                cin>>array[j+1];
                cout<<"- Estrato del estudiante (0-5): ";
                cin>>array[j+2];                

                contadorRegistros++;     
            }
            

            cout<<"- - - - - - - - - - - - - - Registros almacenados - - - - - - - - - - "<<endl;     
            system("pause");
            break;
         case 2:
            system("cls");  
            cout<<"********************** Becados para U. Nacional ********************************";
            
            if(contadorRegistros==0){
               cout<<endl;
               cout<<"Usted no ha digitado ninguno de los "<<numeroRegistros<<" Registros"<<endl;
               cout<<endl;
             
            }else{
                  cout<<"Nombre del alumno | Edad    |  Icfes  |    Estrato   |"<<endl;
                  cout<<endl;
                  for(int i=0,j=0;i<numeroRegistros;i++,j=j+3){
                      if(array[j+1]>=920&&array[j+2]<=3&&(array[j]>=16&&array[j]<=23)){
                      cout<<nombres[i]<<"          |     "<<array[j]<<"     |  "<<array[j+1]<<"     |   "<<array[j+2]<<"   |      "<<endl;                                                                                      
                      }        
                  }
             }
            
            cout<<" "<<endl;
            system("pause");                    
            break;
         case 3:
            system("cls");
            cout<<"********************** Becados para U. Andes ********************************"<<endl;
            
            if(contadorRegistros==0){
               cout<<" "<<endl;
               cout<<"Usted no ha digitado ninguno de los "<<numeroRegistros<<" Registros"<<endl;
               cout<<" "<<endl;
             
            }else{
                  
                  cout<<"Nombre del alumno | Edad    |  Icfes  |    Estrato   |"<<endl;
                  cout<<endl;
                  for(int i=0,j=0;i<numeroRegistros;i++,j=j+3){
                      if(array[j+1]>=900&&array[j+2]>=4&&(array[j]>=23&&array[j]<=26)){
                      cout<<nombres[i]<<"       |         "<<array[j]<<"     |   "<<array[j+1]<<"    |   "<<array[j+2]<<"     |    "<<endl;                                                                                      
                      }        
                  }      
             }
            
            cout<<" "<<endl;
            system("pause");                    
            break;
            
            case 4:
            system("cls");
            cout<<"****************** No Becados para U. Andes, U. Nacional ***********************"<<endl;
            
            if(contadorRegistros==0){
               cout<<" "<<endl;
               cout<<"Usted no ha digitado ninguno de los "<<numeroRegistros<<" Registros"<<endl;
               cout<<" "<<endl;
             
            }else{
                  
                  cout<<"Nombre del alumno | Edad    |  Icfes  |    Estrato   |"<<endl;
                  cout<<endl;
                  for(int i=0,j=0;i<numeroRegistros;i++,j=j+3){
                      if(array[j+1]>=920&&array[j+2]<=3&&(array[j]>=16&&array[j]<=23)){

                      }else if(array[j+1]>=900&&array[j+2]>=4&&(array[j]>=23&&array[j]<=26)){

                      }else{
                            cout<<nombres[i]<<"          |     "<<array[j]<<"     |  "<<array[j+1]<<"     |   "<<array[j+2]<<"   |      "<<endl;                                                                                      
                            }       
                  }      
             }
                 
            cout<<" "<<endl;
            system("pause");                                     
            break;
         }              
         system("cls");
    }while(seleccion!=5);
    
    
}
