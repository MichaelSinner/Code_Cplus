#include <iostream>
using namespace std;
int main(){
    int n,x,sum;
    cin>>n;
    while(n--){
           sum=0;
           cin>>x; 
           

           for(int i=1;i<=x/2;i++){
                   if(x%i==0){
                   sum=sum+i;  
                   }
           
           
           }
           if(sum==x) printf("%d eh perfeito\n",x); else
           printf("%d nao eh perfeito\n",x);
           
    }
    
    return 0;
}
