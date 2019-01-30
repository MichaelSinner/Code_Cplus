#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int a,b;
    
    while(scanf("%d %d",&a,&b)&&a!=b)
     if(a<b){
      cout<<"Crescente"<<endl;
      }else{
      cout<<"Decrescente"<<endl;
      }
      return 0;
}
