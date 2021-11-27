#include <iostream>
using namespace std;


bool isPrime(int a) {
    int i, t;
    bool flag;
 
    for (i = 3; i <= a; i+=2)
    {
        t = 3;
        while(i%t != 0) t+=2;
        if(i==t) {
            flag = true;
        } else {
            flag = false;
        }
    }
      return flag;     
}

int main() {
    int N,count,i;
    count = 0;
    i = 1;
    cin >> N;
    while(i<N){
        i++;
        if(isPrime(i)){
            count++;
        }
    }
    cout << count << '\n';
}