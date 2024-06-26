//inheritance

#include <iostream>
using namespace std;

class base{
public:
    int a;
protected:
    int b;
private:
    int c;
};

class dp:public base{
    //a is public
    //b is protected
    //c is inaccessible
};

class dpro:protected base{
    //a is protected
    //b is protected
    //c is inaccessible
};

class dpri:private base{
    //a is private
    //b is private
    //c is inaccessible
};


====================================


//single inheritance

#include <iostream>
using namespace std;

class base{
public:
    int x;
    void getx(){
        cout << "enter x value"<< endl;
        cin >> x;
    }
};

class der: public base{
    int y;
public:
    void gety(){
        cout << "enter y value"<< endl;
        cin >> y;
    }
    void disp(){
        cout << "the x value is = " << x << endl;
        cout << "the y value is = " << y << endl;
    }
};

int main(){
    base b;
    b.getx();
    der d;
    d.getx();
    d.gety();
    d.disp();
    return 0;
}

===========================================================