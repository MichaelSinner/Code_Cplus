#include <iostream>

using namespace std;
int main(){
    double n;
    int i;
    int c=0;
    
    for(i=0;i<=5;i++){
                      cin>>n;
                      if(n>=0){
                               c++;
                               }
                      }
    cout<<c<<" valores positivos"<<endl;

    return 0;
    }
