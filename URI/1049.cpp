#include <iostream>
#include <cstdio>

using namespace std;
int main(){
    std::string a,b,c;
    cin>>a>>b>>c;
    
    if(a=="vertebrado"){
                       if(b=="ave"){
                                if(c=="carnivoro"){
                                                  cout<<"aguia"<<endl;
                                }else cout<<"pomba"<<endl;
                       }if(b=="mamifero"){
                                 if(c=="onivoro"){
                                                  cout<<"homem"<<endl;
                                 }else cout<<"vaca"<<endl;
                       }
    }

    if(a=="invertebrado"){
                       if(b=="inseto"){
                                if(c=="hematofago"){
                                                  cout<<"pulga"<<endl;
                                }else cout<<"lagarta"<<endl;
                       }if(b=="anelideo"){
                                 if(c=="hematofago"){
                                                  cout<<"sanguessuga"<<endl;
                                 }else cout<<"minhoca"<<endl;
                       }
    }

return 0;
}
