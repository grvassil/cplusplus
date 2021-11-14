#include "pzhelp"
#include <string>

PROGRAM {
    int i, N, k, count = 0, numberOfWords;
    char word[20];

    numberOfWords = READ_INT();

    string result[numberOfWords];

    FOR(k, 1 TO numberOfWords) {
        word[0] = getchar();
        i = 0;
        while (word[i] != '\n')
        {
            i++;
            word[i] = getchar();
        }
        N = i;
        if (N == 0)
        {
            result[k-1] = "empty";
        }
        else if (N > 20)
        {
            result[k-1] = "error";
        }
        else
        {
            i = 0;
            bool flag = true;
            FOR(i, 0 TO N-1) {
                if(word[i] != word[N-1-i]) flag = false;
            }

                if (flag)
                {
                    count++;
                    result[k-1] = "yes";
                } else
                {
                    result[k-1] = "no";
                }

        
        }
    }

    FOR(k, 0 TO numberOfWords-1) WRITELN(result[k]);
    WRITELN(FORM((double)count/numberOfWords, 0, 3));
    
   
}

