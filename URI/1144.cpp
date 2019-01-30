#include <iostream>
using namespace std;
int main(){
    int n,f;
    cin>>n;
      for(f=1;f<=n;f++){
      cout<<f<<" "<<f*f<<" "<<f*f*f<<endl;                
      cout<<f<<" "<<(f*f)+1<<" "<<(f*f*f)+1<<endl;                                      
      }
}
