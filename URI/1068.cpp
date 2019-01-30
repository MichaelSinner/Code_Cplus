#include<iostream>
#include <string>

using namespace std;
      
int main()
{
  int c;
 string expresion;
 
 while(cin >> expresion)
 {
          c = 0;          
             for(unsigned int f = 0; f < expresion.length(); ++f )
             {
              if(expresion.at(f) == '(') c++;        
    
              if(expresion.at(f) == ')')  c--;
              
              if( c < 0) break;
             }
       
        if(c == 0 )  cout<<"correct"<<endl;
        else  cout<<"incorrect"<<endl;
   
  }

 return 0;
 }
