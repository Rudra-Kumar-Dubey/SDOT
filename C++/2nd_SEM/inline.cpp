#include <iostream>
using namespace std;

//void exchange(int &a, int &b);

class simple{
    int a,b,sub,div;
public:
    void get(){
        cout << "enter a and b values";
        cin >> a >> b;
    }
    inline void sub1(){
        sub = a - b;
        cout << "the sub is" << sub<< endl;
    }
    void div1();

};
inline void simple::div1() {
    div = a/b;
    cout << "the div is" << div << endl;
}

int main() {
    simple s;
    s.get();
    s.sub1();
    s.div1();
    return 0;
}