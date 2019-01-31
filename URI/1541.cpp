#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;

    while (cin >> a && a)
    {
        cin >> b >> c;

        double sizeLand = (100 * a * b) / c;

        cout << floor(sqrt(sizeLand)) << endl;
    }

    return 0;
}
