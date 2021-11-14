#include "pzhelp"

typedef int list[100];

FUNC int minimum(list a) {
    int i;
    int min = a[0];
    FOR(i, 1 TO sizeof(a)) {
        if(a[i] < min) min = a[i];
    }
    return min;
}

FUNC int maximum(list a) {
    int i;
    int max = a[0];
    FOR(i, 1 TO sizeof(a)) {
        if(a[i] < max) max = a[i];
    }
    return max;
}

PROGRAM {
    int N, M, i, j;
    N = READ_INT();
    M = READ_INT();
    int arr[M][N];
    FOR(i, 0 TO N-1) {
        FOR(j, 0 TO M-1) {
            arr[i][j] = READ_INT();
        }
    }


}