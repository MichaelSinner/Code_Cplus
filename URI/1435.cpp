#include <iostream>

using namespace std;

int main()
{
    int valor, i, j, k, m, p, q, nl, np;

    while (cin >> valor)
    {

        if (valor == 0) break;

        k = valor % 2;
        m = valor / 2;

        nl = 1;
        q = valor;

        for (i = 1; i <= valor; i++)
        {
            np = 1;
            p = 0;

            for (j = 0; j < valor; j++)
            {

                if (j ==  0) cout << " ";
                else cout << "  ";

                if (p == 0 && np != nl)
                {
                    if (np < 10) cout << " ";
                    cout << np;
                    np++;
                } else if (np == nl && p < q){
                    if (nl < 10) cout << " ";
                    cout << nl;
                    p++;
                } else 
                {
                    np--;
                    if (np < 10) cout << " ";
                    cout << np;
                }
            }

            if (i < m)
            {
                nl++;
                q -= 2;
            } else if (i == m && k == 1){
                nl++;
                q = 1;
            } else if (i == m && k == 0){
                q = 2;
            } else {
                q += 2;
                nl--;
            }

            cout << endl;
        }

        cout << endl;
    }
    return 0;
}
