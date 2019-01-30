#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x,sum=0,c=0;
    while(scanf("%d",&x)&&x>0){
    sum=sum+x;
    c++;                          
    }
    cout<<fixed<<setprecision(2)<<(sum*1.0)/c<<endl;
    return 0;
    }
