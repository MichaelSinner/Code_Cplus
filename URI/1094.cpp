#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main (){
      int n,f,x,sum=0;
      char t;
      int c=0,r=0,s=0;
      cin>>n;
      for(f=1;f<=n;f++){
      scanf("%d %c",&x,&t);
       if(t=='C'){
       c=c+x;         
       }else if(t == 'R'){
             r=r+x;
             }else if(t=='S'){
                   s=s+x;
                   }
        sum=x+sum;
       }
      cout<<"Total: "<<sum<<" cobaias"<<endl;
      cout<<"Total de coelhos: "<<c<<endl;
      cout<<"Total de ratos: "<<r<<endl;
      cout<<"Total de sapos: "<<s<<endl;
      cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<(c*100.00)/sum<<" %"<<endl;
      cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<(r*100.00)/sum<<" %"<<endl;
      cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<(s*100.00)/sum<<" %"<<endl;

      return 0;
}
