#include <iostream>
using namespace std;

int power(int a, int b) {
    int i;
    int P = 1;
   
    for(i = 1; i <= b; i++) P*=a;
    return P;

}

int main() {

    int j, N, i, sum, digit;
    
    cin >> N;
    int a[10][N];

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < N; j++)
        {
            a[i][j] = power(i, j + 1);
        }
        
    }
    

    for (i = 0; i < power(10, N)-1; i++)
    {
        j = i;
        sum = 0;
        while (j>0)
        {
            digit = j%10;
            sum+=a[digit][N-1];
            j/=10;
            if (sum > i)
            {
                break;
            }
            
        }
        if (i == sum)
        {
            cout << i << '\n';
        }
        
        
    }
    
}