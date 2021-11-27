#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, j, sum, temp;
    for (i = 1000; i < 10000; i++)
    {
        sum = 0;
        temp=i;
        for (j = 0; j < 4; j++)
        {
            sum+=pow(temp%10, 4);
            temp/=10;
        }

        if(i==sum) cout << i << "\n";
        
    }
    
}