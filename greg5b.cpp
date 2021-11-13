#include "pzhelp"
FUNC int power(int a, int b) {
    int k;
    int P = 1;
    FOR(k, 1 TO b) {
        P *= a;
    }
    return P;

}

PROGRAM {

    int j, N, i, sum, digit;
    int a[10][8];
    N = READ_INT();

    FOR(i, 0 TO 9) {
        FOR(j, 0 TO N-1) {
            a[i][j] = power(i, j+1);
        }
    }

    FOR(i, 0 TO power(10, N) - 1) {
      
        j = i;
        sum = 0;
        while (j > 0)
        {
            digit = j % 10;
            sum += a[digit][N-1];
            j /= 10;
            if (sum > i) break;
        }
        
        if (i == sum) {
            WRITELN(i);
        }
        
    }
}