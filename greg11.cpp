#include <iostream>
using namespace std;

int main() {
    int N, i, j, key;

    cin >> N;
    int a[N][N];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cin >> a[i][j];
        }
    }

    key = 0;
    bool allNumbers = true;
    while(allNumbers && key < N*N) {

        bool found = false;
        i = 0;
        while (i < N && !found) {
            j = 0;
            while (j < N && !found) {
                if (a[i][j] == key)
                {
                    found = true;
                }
                else
                {
                    j++;
                }
                
            }
            i++;
        }
        if(found) {
            key++;
        } else {
            allNumbers = false;
        }
    }

    if (!allNumbers)
    {
        cout << "no" << '\n';
    }
    else
    {
        int sum1 = 0;
        int sum2 = 0;
        for(i = 0; i < N; i++) {
            sum1+=a[i][i];
            sum2+=a[i][N-1-i];
        }
        if(sum1 != sum2) {
            cout << "no"<< '\n';
        } else {
            bool flag = false;
            for(i = 0; i < N; i++){
                int sum = 0;
                for(j = 0; j < N; j++) {
                    sum+=a[i][j];
                }
                if(sum!=sum1) flag = true;
            }
            bool flag1 = false;
            for(j = 0; j < N; j++){
                int sum = 0;
                for(i = 0; i < N; i++) {
                    sum+=a[i][j];
                }
                if(sum!=sum1) flag1 = true;
            }

            if(!flag && !flag1) {
                cout << "yes" << '\n';
            } else {

                cout << "no" << '\n';
            }
        }
    }
    
}