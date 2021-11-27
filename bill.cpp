#include "pzhelp"
using namespace std;

int a,b,c,i,op;
char character;
PROGRAM {
    for(i=0; i<5; i++){
        a = READ_INT();
        character = getchar();
        b = READ_INT();
        getchar();
        c = READ_INT();
        switch (character){
            case '+':
                op = a + b;
                break;
            case '-':
                op = a-b;
                break;
            case '*':
                op = a*b;
                break;
            case '/':
                op = a/b;
                break;
            case '%':
                op = a % b;
                break;
        }
        if(op==c){
            WRITELN("correct");
        }
        else{
            WRITELN("wrong");
        }

    }
}