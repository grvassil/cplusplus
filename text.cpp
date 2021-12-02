#include <iostream>
using namespace std;

int main() {
    int n = 0, c;
    c = getchar();
    while (c!= EOF)
    {
        n++;
        c = getchar();
    }

    cout << n;
    
}