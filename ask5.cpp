#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a[10], b[10], c[10];
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        a[i]=i;
        b[i]=i;
        c[i]=i;
    }

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 9; k++)
            {
                
                    if (100*a[i]+10*b[j]+c[k] == pow(a[i], 3)+pow(b[j], 3)+pow(c[k], 3))
                    {
                        cout << 100*a[i]+10*b[j]+c[k] << '\n';
                    }
                    
                
                
            }
            
        }
        
    }
      
}
