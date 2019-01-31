#include <iostream>

using namespace std;

int main (){

    int personas;

    while (cin >> personas){

        if (personas) 
             cout << "vai ter duas!" << endl;
        else 
             cout << "vai ter copa!" << endl;
    }

    return 0;
}
