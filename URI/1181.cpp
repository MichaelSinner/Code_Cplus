#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int i,j,n;
    float f,s=0.0;
    char c;
    cin>>n;
    cin>>c;
    for(i=0;i<=11;i++){
            for(j=0;j<=11;j++){
            cin>>f;
            if(j==n) s+=f;                               
            }
    }
    if(c=='S')cout<<fixed<<setprecision(1)<<s<<endl;
    else cout<<fixed<<setprecision(1)<<s/12<<endl;
    return 0;
}
