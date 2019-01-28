#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float s;
    cin>>s;
    if(s<=2000)
        cout<<"Isento"<<endl;
        else if(s<=3000)
        cout<<fixed<<setprecision(2)<<"R$ "<<(s-2000)*0.08<<endl;
        else if(s<=4500)
        cout<<fixed<<setprecision(2)<<"R$ "<<1000*0.08+(s-3000)*0.18<<endl;
        else
        cout<<fixed<<setprecision(2)<<"R$ "<<1000*0.08+1500*0.18+(s-4500)*0.28<<endl;

return 0;        
}
