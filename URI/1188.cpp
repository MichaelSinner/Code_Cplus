#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char o;
    int i, j, x = 5;
    float s = 0, n;
    

    cin>>o;
    
    for (i = 0; i <= 11; i++){
        for (j = 0; j <= 11; j++){
           cin>>n;
            if (j > x && j < 11 - x)
                s += n;
        }
        if (i > 5)
            x--;
    }
    if (o == 'S')
        cout<<fixed<<setprecision(1)<<s<<endl;

    else
        cout<<fixed<<setprecision(1)<<s/30<<endl;

    return 0;
}
