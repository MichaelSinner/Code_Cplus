#include <iostream>
using namespace std;
int main(){
    int a,b,x,n,f;
    int sum=0;
    cin>>n;
    for(f=1;f<=n;f++){
    scanf("%d %d",&a,&b);
    if(a<b){
      for(x=a+1;x<=b-1;x++){
        if(x%2!=0)
        sum=sum+x;
      } 
    }else{
      for(x=b+1;x<=a-1;x++){
        if(x%2!=0){
        sum=sum+x;
        }            
      }      
    }
    cout<<sum<<endl;
    sum=0;
 }

    return 0;
}
