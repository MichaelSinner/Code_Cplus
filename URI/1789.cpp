#include <iostream>

using namespace std;

int main()
{

    int L, velocidade, level;


   while(cin>>L && L)
   {

   level = 0;


      for( int f = 0; f < L; f++)
      {

         cin>>velocidade;

         if(velocidade < 10 && level == 0)
         {
            level = 1;
         }
         if(velocidade >= 10 && velocidade < 20 && level < 1)
         {
            level = 2;
         }
         if(velocidade >= 20 && level < 3)
         {
            level = 3;
         }
      }
   
   cout<<level<<endl;

   }
    
    return 0;    
}
