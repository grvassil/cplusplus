#include <iostream>
using namespace std;

int main() {
    int N, i, j, key;

    cin >> N;
    int a[N][N];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cin >> a[i][j];
        }
    }

    key = 0;
    bool isMagic = false;
    while(!isMagic && key < N*N) {

        bool flag1 = false;
        i = 0;
        while (i < N && !flag1) {
            j = 0;
            while (j < N && !flag1) {
                if (a[i][j] == key)
                {
                    flag1 = true;
                }
                else
                {
                    j++;
                }
                
            }
            
        }
    }

    key++;
        
    
}