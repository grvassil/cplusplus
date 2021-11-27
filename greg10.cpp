#include <iostream>
#include <iomanip>
using namespace std;

int main() {


int a[17][17], i, j, k, h, m, n = 5;

i = n / 2;
j = n;
k = 0;
for (h = 1; h <= n; h++)
{
    j--;
    a[i][j] = k;
    k++;
    for (m = 2; m <= n; m++)
    {
        j = (j+1)%n;
        i = (i+1)%n;
        a[i][j] = k;
        k++;
    }
    
}

for (i = 0; i < n; i++)
{
    for (j = 0; j < n; j++)
    {
        cout << setw(4) << a[i][j];
    }
    cout << '\n';
}


}

