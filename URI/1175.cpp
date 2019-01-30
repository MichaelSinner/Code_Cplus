#include <iostream>
using namespace std;
int main(){
    int x[20],aux;
    for(int a=0;a<=19;a++) scanf("%d", &x[a]);
    
    for(int b=0;b<=9;b++){
            aux=x[b];
            x[b]=x[19-b];
            x[19-b]=aux;
            }
    for(int c=0;c<=19;c++){
            cout<<"N["<<c<<"] = "<<x[c]<<endl;
            }
    return 0;
    
}
