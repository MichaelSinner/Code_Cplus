#include <iostream>
using namespace std;
int main(){
    int a,n,s,f;
    scanf("%d %d",&a,&n);
    s=a;
    while(n<=0) cin>>n;
    for(f=1;f<n;f++)
    s += ++a;
    
    cout<<s<<endl;    
    return 0;
}
    
