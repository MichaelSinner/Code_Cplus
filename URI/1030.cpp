#include <iostream>

using namespace std;

int josephus(int n, int k)
{
    if (n == 1) return 1;
    return ((josephus(n - 1, k) + k - 1) % n) + 1;
}

int main()
{
    unsigned int k, n;
    int c, NC;

    cin >> NC;
    c = 0;
    
    while (++c <= NC){
       cin >> n >> k;
        cout << "Case " << c << ": " << josephus(n, k) << endl;
    }

    return 0;
}
