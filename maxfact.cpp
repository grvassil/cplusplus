#include <iostream>
using namespace std;

int fact(int x){
    if(x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}
int main(){
    int N;

    cin >> N;
    int i = 1;
    while (fact(i) <= N)
    {
        i++;
    }

    cout << i-1 << '\n';
    
}

