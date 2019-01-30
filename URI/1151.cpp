#include <iostream>
using namespace std;
int main(){
    int n,x,f;
    cin>>n;
    int a=1,b=1;
    if(n==0){cout<<0<<endl;
    return 0;
    }
    cout<<0;
    for(f=1;f<n;f++){
      cout<<" "<<a;
      x=a;
      a=b;
      b=b+x;                 
     }
   cout<<endl;

}
