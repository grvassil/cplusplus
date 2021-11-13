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

    int j, i, sum, digit;
    int a[10][4];

    FOR(i, 0 TO 9) {
        FOR(j, 0 TO 3) {
            a[i][j] = power(i, j+1);
        }
    }

    FOR(i, 0 TO 9999) {
      
        j = i;
        sum = 0;
        while (j > 0)
        {
            digit = j % 10;
            sum += a[digit][3];
            j /= 10;
        }
        
        if (i == sum) {
            WRITELN(i);
        }
        
    }
}