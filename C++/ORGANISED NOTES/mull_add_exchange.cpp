#include <iostream>
using namespace std;

int sum(int a, int b = 2000, int c = 3000){
    int res;
    res = a+b+c;
    return res;
}

int main() {
    int a;
    int b = 200;
    int c;
    int res;
    res = sum(b);
    cout << "the result is " << res;
    return 0;
}


===============================================================


#include <iostream>
using namespace std;

void exchange(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    a = a+6000;
    b = b+a;

}

int main() {
    int a = 1000, b = 2000;
    exchange(a,b);
    cout << "the a value is "<< a <<endl;
    cout<<"the b value is " << b <<endl;


    return 0;

}


===============================================================


//No arguments and no return value
//No arguments and with return value
//Argument and no return value
//With arguments and with return value


===============================================================


#include <iostream>
using namespace std;

void exchange(int &a, int &b);

class prime{
    int n;
public:
    void get(){
        cout <<"enter a value to check"<<endl;
        cin >> n;
    }
    void find(){
        
        get();
        int check = 1;
        for(int i = 2;i<=n/2;i++){
            if (n%i == 0){
                check = 0;
                break;
            }
        }
        if (check == 1){
            cout<<"its prime";
        }
        else{
            cout << "its not";
        }
    }
};


int main() {
    prime p;
    //p.get();
    p.find();
    return 0;

}


===============================================================


#include <iostream>
using namespace std;

void exchange(int &a, int &b);

class prime{
    int n;
public:

    int find(int x) {

        n = x;
        int check = 1;
        for(int i = 2;i<=n/2;i++){
            if (n%i == 0){
                check = 0;
                break;
            }
        }
        if (check == 1){
            return 1;
        }
        else{
            return 0;
        }
    }
};


int main() {
    int res;
    prime p;
    res = p.find(5);
    if (res == 1){
        cout << "its prime";
    }
    else{
        cout <<"its not prime";
    }
    return 0;

}


===============================================================


/*
 * inline return type function_name(par)
 * {
 *
 * }
 */

#include <iostream>
using namespace std;

void exchange(int &a, int &b);

class simple{
    int a,b,add,mul;
public:
    void get(){
        cout << "enter a and b values";
        cin >> a >> b;
    }
    inline void add1(){
        add = a + b;
        cout << "the sum is" << add << endl;
    }
    void mul1();

};
inline void simple::mul1() {
    mul = a*b;
    cout << "the mul is" << mul << endl;
}


int main() {
    simple s;
    s.get();
    s.add1();
    s.mul1();
    return 0;

}


===============================================================
===============================================================

