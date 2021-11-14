#include "pzhelp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, N, k, numberOfWords;
    int count = 0;
    string word;

    cin >> numberOfWords;
    cin.ignore();
    string result[numberOfWords];

    for(k= 1; k<= numberOfWords; k++) {
        getline(cin, word);
        
        N = word.length();
        if (N==0)
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
            for(i=0; i<N;i++) {
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

    for(k=0; k< numberOfWords; k++) cout << result[k] <<'\n';
    WRITELN(FORM((float)count/(float)numberOfWords*100, 0, 3));
    
   
}

