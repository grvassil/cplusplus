#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, a, b, c, d, rem, rem2;
    

    for (i = 0; i < 9999; i++)
    {
        d = i % 10;
        rem = i / 10;
        c = rem % 10;
        rem2 = rem / 10;
        b = rem2 % 10;
        a = i / 1000;

        if (i == pow(a, 4)+pow(b, 4)+pow(c, 4)+pow(d, 4))
        {
            cout << i << '\n';
        }
                
    }
      
}
