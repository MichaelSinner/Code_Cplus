#include <iostream>
using namespace std;
int main(){
    int x,f;
    cin>>x;

    if(x%2==0)
    x++;
    for(f=0;f<=5;f++,x=x+2){
    cout<<x<<endl;                  
    }

    return 0;
}
