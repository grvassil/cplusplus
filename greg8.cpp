#include "pzhelp"

typedef int list[20];

FUNC int minimum(list a) {
    int i;
    int min = a[0];
    FOR(i, 1 TO sizeof(a)) {
        if(a[i] < min) min = a[i];
    }
    return min;
}

PROGRAM {
    int N, M;
    N = READ_INT();
    M = READ_INT();
    
}