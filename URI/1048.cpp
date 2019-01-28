#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double s,ns,r;
    cin>>s;
    if(s>0&&s<=400){
        r=s*0.15;
        ns=r+s;
            cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
                cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<r<<endl;
                    cout<<"Em percentual: "<<15<<" %"<<endl;
                    }
    if(s>400.01&&s<=800){
        r=s*0.12;
        ns=r+s;
            cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
                cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<r<<endl;
                    cout<<"Em percentual: "<<12<<" %"<<endl;
                    }                    
     if(s>800.01&&s<=1200){
        r=s*0.10;
        ns=r+s;
            cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
                cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<r<<endl;
                    cout<<"Em percentual: "<<10<<" %"<<endl;
                    }
      if(s>1200.01&&s<=2000){
        r=s*0.07;
        ns=r+s;
            cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
                cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<r<<endl;
                    cout<<"Em percentual: "<<7<<" %"<<endl;
                    }
      if(s>2000){
        r=s*0.04;
        ns=r+s;
            cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
                cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<r<<endl;
                    cout<<"Em percentual: "<<4<<" %"<<endl;
                    }                    
                    
      return 0;
    
    
    
    }
