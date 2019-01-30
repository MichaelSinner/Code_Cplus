#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double n,c;
    cin>>n;
    c=n;

    for(int f=0;f<100;f++){
            cout<<fixed<<setprecision(4)<<"N["<<f<<"] = "<<c<<endl;
            c=c/2;
            }
            return 0;
    }
