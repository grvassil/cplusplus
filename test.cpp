#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a[10], b[10], c[10], d[10];
    int i, j, k, l;
    for (i = 0; i <= 9; i++)
    {
        a[i]=i;
        b[i]=i;
        c[i]=i;
        d[i]=i;
    }

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            for (k = 0; k <= 9; k++)
            {
                for (l = 0; l <= 9; l++)
                {
                    if (1000*a[i]+100*b[j]+10*c[k]+d[l] == pow(a[i], 4)+pow(b[j], 4)+pow(c[k], 4)+pow(a[l], 4))
                    {
                        cout << 1000*a[i]+100*b[j]+10*c[k]+d[l] << '\n';
                    }
                    
                }
                
            }
            
        }
        
    }
      
}
