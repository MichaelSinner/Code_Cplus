#include <iostream>

using namespace std;

int main()
{
    int N , N1 , N2 , D1 , D2 , num , den , r , num_r , den_r ;
    char  op , div1 , div2;
    cin>>N;
    
    while(N--)
    {  //scanf("%d %c %d %c %d %c %d", &a, &i, &b, &o, &c, &i, &d);
         cin>>N1>>div1>>D1>>op>>N2>>div2>>D2;

         switch(op)
         {
            case '+':
                num = (D1 * D2) * N1 / D1 + (D1 * D2) * N2 / D2;
                den = D1 * D2;
                break;
            case '-':
                num = (D1 * D2) * N1 / D1 - (D1 * D2) * N2 / D2;
                den = D1 * D2;
                break;
            case '*':
                num = N1 * N2;
                den = D1 * D2;
                break;
            default:
                num = N1 * D2;
                den = D1 * N2;
                break;
        }
        
        if(abs(num)<abs(den))           r = abs(num);                  
        else                            r = abs(den);
        
        num_r = num;
        den_r = den;
        
        int j = 2;
        
        while (j <= r / 2 + 1)
        {
            if (num_r % j == 0 && den_r % j == 0)
            {
                num_r = num_r / j;
                den_r = den_r / j;
            } else {
                j++;
            }
        }

        cout<<num<<"/"<<den<<" = "<<num_r<<"/"<<den_r<<endl;
           
    }
    
    return 0;
}
