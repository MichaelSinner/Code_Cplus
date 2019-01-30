#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,f;
    cin>>n;
    double a,b,c;
    for(f=0;f<=n;f++){
     cin>>a>>b>>c;
     cout<<fixed<<setprecision(1)<<((a*2)+(b*3)+(c*5))/(2+3+5)<<endl;
    }

    return 0;
    
}
