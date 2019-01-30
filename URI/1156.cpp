#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double s=1.0,x=2.0;
    for(int f=3;f<=39;f+=2){
            s = s+(f/x);
            x *=2;
            }
    cout<<fixed<<setprecision(2)<<s<<endl;

    return 0;
}
