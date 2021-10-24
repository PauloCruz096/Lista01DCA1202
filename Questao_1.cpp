#include <iostream>
using namespace std;

int main(void){

    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;
    p == &i;
    cout << endl;
    cout << *p - *q << endl;
    cout << **&p << endl;
    cout << 3 - *p/(*q) + 7 << endl;

}
