#include <iostream>
// #include <cmath>
using namespace std;

int power(int a, int b) {
    int i, P;
    P = 1;
    for (i = 0; i < b; i++)
    {
        P*=a;
    }

    return P;
    
}

int main() {
    int i, j,k, sum, temp, arr[10];
    for (i = 0; i < 10; i++)
    {
        arr[i] = power(i, 3);
    }
        for (j = 0; j < 1000; j++)
        {
        temp=j;
        sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum += arr[temp%10];
                temp/=10;
            }
            
        if(j==sum) cout << j << "\n";
        }

        
    }
    
