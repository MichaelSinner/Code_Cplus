#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r1, x1, y1, r2, x2, y2;
    double distancia;

    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)
    {
    distancia = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
        if (r1 >= distancia + r2) cout << "RICO" << endl;
        else cout << "MORTO" << endl;
    }

    return 0;
}
