#include <iostream>
using namespace std;

int main() {
    int i, j, temp = 0, N, M, K, S, c, sum = 0;
    cin >> K >> N >> M;
    int a[N][M], b[K];


    for (i = 0; i < K; i++)
    {
        cin >> b[i];
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cin >> a[i][j];
        }
        
    }

    for (i = 0; i < N; i++)
    {
        c = 0;
        for (j = 0; j < M; j++)
        {
            if (a[i][j] == b[c])
            {
                c++;
                if (c == K) {
                    sum++;
                    c = 0;
                }    
            } else {
                c = 0;
            }

            
        }
        
    }
   
    for (j = 0; j < M; j++)
    {
        c = 0;
        for (i = 0; i < N; i++)
        {
            if (a[i][j] == b[c])
            {
                c++;
                if (c == K) {
                    sum++;
                    c = 0;
                }    
            } else {
                c = 0;
            }

            
        }
        
    }

    cout << sum << '\n';
    
}