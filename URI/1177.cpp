#include <iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    for(int f=0;f<1000;f++){

            if(c>=n) c=0;
            cout<<"N["<<f<<"] = "<<c<<endl;
            c++;
            
    }

return 0;    
}
