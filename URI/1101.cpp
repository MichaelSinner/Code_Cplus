#include <iostream>
using namespace std;
int main(){
    int a,b,f;
    int sum=0;
    cin>>a>>b;
    if(a<=0||b<=0){
    return 0;}
                   
    if(a>b){
      for(f=b;f<=a;f++){

            cout<<f<<" ";           
      sum=sum+f;
      }
      
    }            
    if(b>a){
       for(f=a;f<=b;f++){
        cout<<f<<" ";
         sum=f+sum;
                     }                
       }
    
    cout<<"Sum="<<sum<<endl; 
    
    
    
 system("pause");
    return 0;
}
