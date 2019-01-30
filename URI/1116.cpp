#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main(){
    int n,a,b,f;
    cin>>n;
    for(f=1;f<=n;f++){
    
    scanf("%d %d",&a,&b);
    if(b==0){
    cout<<"divisao impossivel"<<endl;             
             }else{
             cout<<fixed<<setprecision(1)<<a/(b*1.0)<<endl;
                   }
    }
}
