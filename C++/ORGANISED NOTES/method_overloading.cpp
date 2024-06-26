#include <iostream>
using namespace std;

//method overloading: if you have more than one function with same name
//1 - Different type of param
//2 - Different number of parameter
//3 - Different order of parm

void sum(int x, int y){
    cout << "the sum is " << x + y << endl;
}

void sum(double x, double y){
    cout << "the sum value is " << x + y << endl;
}

void sum(int x, int y, int z){
    cout << "the sum value is " << x + y + z << endl;
}

int main(){
    sum(10,20);
    sum(10.5,20.4);
    sum(10,20,30);
}

=================================================================================


#include <iostream>
using namespace std;

class simple{
public:
    void sum(int x, int y) {
        cout << "the sum is " << x + y << endl;
    }

    void sum(double x, double y) {
        cout << "the sum value is " << x + y << endl;
    }

    void sum(int x, int y, int z) {
        cout << "the sum value is " << x + y + z << endl;
    }

};
int main(){
    simple s;
    s.sum(10,20);
    s.sum(10.5,20.4);
    s.sum(10,20,30);
}


===============================================================


#include <iostream>
using namespace std;

class simple{

    int sal;
    string name;
    int phno;
public:
    simple(int s, string n){
        sal = s;
        name = n;
        phno = 0;
    }
    simple(int s, string n, int p){
        sal = s;
        name = n;
        phno = p;
    }
    void disp(){
        cout << "the sal is " << sal << endl;
        cout << "the name is " << name << endl;
        cout << "the phno is " << phno << endl;
    }
};

int main(){
    simple s1(20000,"bharath");
    simple s2 (40000, "sarath");
    s1.disp();
    s2.disp();

}

======================================================