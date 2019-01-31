#include <iostream>

using namespace std;

int main()
{
    int n, i, j, p, np;
    bool o;

    while (cin >> n)
    {

        if (n == 0) break;

        p = 1;

        for (i = 1; i <= n; i++)
        {
            np = p;
            o = false;

            for (j = 0; j < n; j++)
            {
                if (j == 0){
                    if (np < 10) cout << "  ";
                    else if (np < 100) cout << " ";
                } else {
                    if (np < 10) cout << "   ";
                    else if (np < 100) cout << "  ";
                    else cout << " ";
                }

                cout << np;

                if (np == 1) o = true;

                if (o) np++;
                else np--;
            }
            p++;

            cout << endl;
        }

        cout << endl;
    }
    return 0;
}
