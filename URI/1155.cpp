#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double s=1.0;
    for(int f=2;f<=100;f++){
            s = s+(1.0/f);
            }
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
    }
