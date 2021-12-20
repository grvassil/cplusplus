#include <iostream>
using namespace std;

int main() {
    int i, j, N, max, min;
    bool flag1;
    cin >> N;
    int a[N], b[N];

    for (i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < N; i++)
    {
        cin >> b[i];
    }

    
    flag1 = true;
    i = 0;
    while(flag1 && i < N)
    {
        flag1 = false;
        for (j = 0; j < N; j++)
        {
            if (a[i] == b[j]) {
                flag1 = true;
                break;
            }
        }

        i++;
        
    }

    if(flag1) {
        cout << "yes" << '\n';
    } else {
        max = -1;
        min = 1000000;
        for (i = 0; i < N; i++)
        {
            flag1 = false;
            for (j = 0; j < N; j++)
            {
                if (a[i] == b[j]) {
                    flag1 = true;
                    break;
                }
            }

            if(!flag1) {
                if(a[i] > max) max = a[i];
                if(a[i] < min) min = a[i];
            }
            
        }

        for (i = 0; i < N; i++)
        {
            flag1 = false;
            for (j = 0; j < N; j++)
            {
                if (b[i] == a[j]) {
                    flag1 = true;
                    break;
                }
            }

            if(!flag1) {
                if(b[i] > max) max = b[i];
                if(b[i] < min) min = b[i];
            }
            
        }

        cout << "no" << ' ' << min << ' ' << max << '\n';

    }
        
        
        

    

}