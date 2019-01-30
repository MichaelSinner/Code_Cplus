#include <iostream>
using namespace std;
int main(){
    int fac,temp;
    cin>>fac;
    temp=fac-1;
    while(temp>=1){
    fac=fac*temp;
    temp--;               
    }
    cout<<fac<<endl;
}
