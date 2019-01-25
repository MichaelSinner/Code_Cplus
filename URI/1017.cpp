#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
int main(){
    int h;
    int v;
    cin>>h>>v;
    cout<<fixed<<setprecision(3)<<(h*v*1.0)/12<<endl;
    system("pause");
    return 0;
    }
