#include <iostream>
using namespace std;

//DMA
//new operator
//pointer
//int helps to create a memory in heap

int main(){
    int *p = new int;
    *p = 1234;
    cout << p << ' ' << *p << ' ' << &p;

    return 0;
}


===============================================


#include <iostream>
using namespace std;

//int *p = new int[4]
//p[0], p[1], p[2], p[3]
//1000 - Base address (first)
//(1000+0*2)
//1000--->10
//(1000+1*2)
//1002--->20
//delete p

int main(){
    int size;
    cout << "enter number of emp working" << endl;
    cin >> size;
    int *p = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> *(p + i);
        cout << (p + i);
    }
    cout << p[0];
    delete[] p;
    return 0;
}


============================================================


#include <iostream>
using namespace std;

class simple {
    string name;
    int sal;
public:
    simple(string n, int s) {
        name = n;
        sal = s;
    }

    void disp() {
        cout << "the emp name is" << name << endl;
        cout << "the emp sal is" << sal << endl;
    }
};
    int main(){
        simple *p = new simple("bharath",10);
        p -> disp();
    }


==========================================================
