#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    double A,B,C;
    cin>>A>>B>>C;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<(A*C)/2<<endl;
        cout<<fixed<<setprecision(3)<<"CIRCULO: "<<C*C*3.14159<<endl;
            cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<((A+B)/2)*C<<endl;
                cout<<fixed<<setprecision(3)<<"QUADRADO: "<<B*B<<endl;
                    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<A*B<<endl;

                    return 0;
    }
