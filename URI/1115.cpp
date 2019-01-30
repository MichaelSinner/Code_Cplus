#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF&&x!=0&&y!=0){

     if(x>0&&y>0)
             cout<<"primeiro"<<endl;
     if(x>0&&y<0)
             cout<<"quarto"<<endl;
     if(x<0&&y<0)
             cout<<"terceiro"<<endl;
     if(x<0&&y>0)
             cout<<"segundo"<<endl;
                   
    
    }
   

}
