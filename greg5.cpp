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
    N = READ_INT();

    FOR(i, 0 TO power(10, N) - 1) {
      
        j = i;
        sum = 0;
        while (j > 0)
        {
            digit = j % 10;
            sum += power(digit, N);
            j /= 10;
            if (sum > i) break;
                
        }
        
        if (i == sum) {
            WRITELN(i);
        }
        
    }
}