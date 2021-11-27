#include <iostream>
using namespace std;

int minimum(int a[], int size) {
    int i, min;
    min = a[0];
    for (i = 1; i < size; i++)
    {
        if(a[i] < min) min = a[i];
    }
    return min;
}
int maximum(int a[], int size) {
    int i, max;
    max = a[0];
    for (i = 1; i < size; i++)
    {
        if(a[i] > max) max = a[i];
    }
    return max;
}

int main() {
    int N, M, i, j;
    cin >> N;
    cin >> M;
    int arr[N][M];
    int col[M], cols[N], rows[M], row[N];
   for (i=0; i < N; i++)
   {
       for (j=0; j < M; j++)
       {
           cin >> arr[i][j];
       }
   }
   
//    question 1
    for (j = 0; j < M; j++)
    {
        for (i = 0; i < N; i++)
        {
            cols[i] = arr[i][j];
        }
        
        col[j] = maximum(cols, N);
        
    }
    cout << minimum(col, M) << '\n';

    // question 2
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            rows[j] = arr[i][j];
        }
        
        row[i] = minimum(rows, M);
        
    }
    cout << maximum(row, N) << '\n';
    
}