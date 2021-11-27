#include <iostream>
#include <iomanip>
using namespace std;

float average(float a[], int size) {
    int i;
    float sum = 0;
    for (i = 0; i < size; i++)
    {
        sum+=a[i];
    }
    
    return sum/size;
}


int main() {
    int N, M, i, j;
    cin >> N;
    cin >> M;
    float arr[N][M];
    float col[M], cols[N], rows[M], row[N];
   for (i=0; i < N; i++)
   {
       for (j=0; j < M; j++)
       {
           cin >> arr[i][j];
       }
   }
   
//    question 1
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            rows[j] = arr[i][j];
        }
        
        row[i] = average(rows, M);
        
    }
    cout << fixed << setprecision(3) << average(row, N) << '\n';

    // question 2
    for (j = 0; j < M; j++)
    {
        for (i = 0; i < N; i++)
        {
            cols[i] = arr[i][j];
        }
        
        col[j] = average(cols, N);
        
    }

    cout << fixed << setprecision(3) << average(col, M) << '\n';
    
}