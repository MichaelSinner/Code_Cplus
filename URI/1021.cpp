#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float calc(float x,string text,double porc){
     int n=0;
     while(x>=porc){
     n=n+1;               
     x-=porc;
     }
     cout << n << " " << text << "(s) de R$ " << fixed << setprecision(2) <<porc << endl;
     return x;
          
}
int main(){
     float x;
     while(cin >> x) {
     cout << "NOTAS:" << endl;
     x = calc(x, "nota", 100);
     x = calc(x, "nota", 50);
     x = calc(x, "nota", 20);
     x = calc(x, "nota", 10);
     x = calc(x, "nota", 5);
     x = calc(x, "nota", 2);
     cout << "MOEDAS:" << endl;
     x = calc(x, "moeda", 1);
     x = calc(x, "moeda", 0.50);
     x = calc(x, "moeda", 0.25);
     x = calc(x, "moeda", 0.10);
     x = calc(x, "moeda", 0.05);
     x = calc(x, "moeda", 0.01);
     }
}

