#include <iostream>
using namespace std;
int main(){
    int x,y,f;
    int sum=0;
    cin>>x>>y;
    if(x<y){
        for(f=x;f<=y;f++){
         if(f%13!=0){
         sum=sum+f;           
         }
        
        
        }        
    }
    if(x>y){
        for(f=y;f<=x;f++){
         if(f%13!=0){
         sum=sum+f;           
         }        
        
        
        }        
    }
    
    cout<<sum<<endl; 
    return 0;
}
