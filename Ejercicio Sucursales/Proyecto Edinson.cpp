#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int seleccion=0;
    int numeroRegistros = 0;
    int numeroSucursales = 0;
    int contadorRegistros = 0;
    int numSucursal = 0;

        
       cout<<" "<<endl;
       cout<<("Cuantos vendedores va a registrar:  ");      
       cin>>numeroRegistros;
       cout<<endl;
       cout<<("Cuantas sucursales hay:  ");      
       cin>>numeroSucursales;
       cout<<endl;
       system("cls");


       char nombres[numeroRegistros-1][20];
       int VentasEmpleado[numeroRegistros-1];
       int Sucursal[numeroRegistros-1];
       int totalSucursal[numeroSucursales-1];
       for(int f=0;f<numeroSucursales;f++){
              totalSucursal[f]=0;
       }
       
    do{
  	   cout<<"****************************** Menu Principal 	***************************"<<endl;
       cout<<endl;
       cout<<" 1. Cargar datos del Vendedor"<<endl;
       cout<<" 2. Total de ventas por Sucursales"<<endl;
       cout<<" 3. Total de venta de Vendedores"<<endl;
       cout<<" 4. Salir"<<endl;

       cout<<endl;
       cout<<("Elija una opcion por favor:  ");
       cin>>seleccion;
       

    switch(seleccion){
         case 1:
            system("cls");
            cout<<"********************** Cargar datos del Vendedor *****************************";
            for(int i=contadorRegistros;i<numeroRegistros;i++){
                 int aux=0;   
                cout<<endl;
                cout<<"Registro numero "<<contadorRegistros+1<<endl;        
                cout<<"- Nombre del Vendedor : ";
                cin>>nombres[i];
                cout<<"- Sucursal del vendedor : ";
                cin>>Sucursal[i];
                cout<<"- Venta del vendedor : ";
                cin>>VentasEmpleado[i];
                aux=Sucursal[i];
                
                totalSucursal[aux-1] += VentasEmpleado[i];
                contadorRegistros++;     
            }
            

            cout<<"- - - - - - - - - - - - - - Registros almacenados - - - - - - - - - - "<<endl;     
            system("pause");
            break;
         case 2:
            system("cls");  
            cout<<"********************** Ventas por Sucursal ********************************"<<endl;
            
            if(contadorRegistros==0){
               cout<<endl;
               cout<<"Usted no ha digitado ninguno de los "<<numeroRegistros<<" Registros"<<endl;
               cout<<endl;
             
            }else{
                  cout<<"Sucursal | Venta total por sucursal |"<<endl;
                  cout<<endl;
                  for(int i=0;i<numeroSucursales;i++){

                      cout<<i+1<<"          |    $ "<<totalSucursal[i]<<"     |  "<<endl;                                                                                      

                  }
             }
            
            cout<<" "<<endl;
            system("pause");                    
            break;
         case 3:
            system("cls");
            cout<<"*********** Total de ventas por vendedor con o sin comision *******************"<<endl;
            
            if(contadorRegistros==0){
               cout<<" "<<endl;
               cout<<"Usted no ha digitado ninguno de los "<<numeroRegistros<<" Registros"<<endl;
               cout<<" "<<endl;
             
            }else{

            cout<<endl;            
            cout<<" Empleados sin comision - - - - - - - - - - - - - - - - - - - - "<<endl;
            for(int f=0;f<numeroSucursales;f++){
             
                 for(int i=0;i<=numeroRegistros; i++){
                    if((Sucursal[i])-1==f&&totalSucursal[f]<10000000){
                       cout<<"Nombre: "<<nombres[i]<<endl;             
                    }   
                  }
            }
             cout<<endl;            
            cout<<" Empleados con comision del 5%  - - - - - - - - - - - - - - - - - - - - "<<endl;                          
             for(int f=0;f<numeroSucursales;f++){
                 double porceSucursal=totalSucursal[f]*0.4;
                 
               for(int i=0;i<numeroRegistros; i++){
                  if(totalSucursal[f]>=10000000&&(Sucursal[i])-1==f){
                  cout<<"Nombre: "<<nombres[i]<<endl;      
                  }   
               }
            }
               cout<<endl;            
             
             cout<<" Empleados con comision del 5% mas 4,5% - - - - - - - - - - - - - - - - - - - - "<<endl;                          
             for(int f=0;f<numeroSucursales;f++){
                 double porceSucursal=totalSucursal[f]*0.4;
                 
               for(int i=0;i<numeroRegistros; i++){
                  if(totalSucursal[f]>=10000000&&VentasEmpleado[i]>=porceSucursal&&(Sucursal[i])-1==f){
                  cout<<"Nombre: "<<nombres[i]<<endl;             
                  }   
               }
            }
             cout<<endl;            
             
             
             
             
             }
            
            cout<<endl;
            system("pause");                    
            break;
            
         }              
         system("cls");
    }while(seleccion!=4);
    
    
}
