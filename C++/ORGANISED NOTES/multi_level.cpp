//Multi-level Inheritance

#include <iostream>
using namespace std;

class base{
public:
    int x;
    void getx(){
        cout << "enter x value" << endl;
        cin >> x;
    }
};

class der1:public base{
public:
    int y;
    void gety(){
        cout << "enter y value" << endl;
        cin >> y;
    }
};

class der2:public der1{
    int z;
public:
    void getz(){
        cout << "enter z value" << endl;
        cin >> z;
    }
    void disp(){
        cout << "the three variable values are " << x << " " << y << " " << z;

    }
};

int main(){
    der2 d2;
    d2.getx();
    d2.gety();
    d2.getz();
    d2.disp();
    return 0;

}


=======================================================================================


//Multiple Inheritance

#include <iostream>
using namespace std;

class base{
public:
    int x;
};

class der1: public base{
public:
    der1(){
        x = 44;
    }
};

class base1{
public:
    int y;
    void gety(){
        cout << "enter y value" << endl;
        cin >> y;
    }

};

class der11:public der1, public base1{
public:
    int z;
    void getz(){
        cout << "enter z value" << endl;
        cin >> z;
    }
    void sum(){
        cout << "the sum of three variables is " << x + y + z;
    }
};


int main(){
    der11 d;
    d.gety();
    d.getz();
    d.sum();
    return 0;

}


======================================================================


//Hierarchical Inheritance

#include <iostream>
using namespace std;

class base1{
public:
    int x,y;
    void getxy(){
        cout << "enter x and y value" << endl;
        cin >> x >> y;
    }
};

class der1: public base1{
public:
    void sum(){
        cout << "the sum of two base variable is " << x + y << endl;
    }
};

class der2: public base1{
public:
    int z;
    void getz(){
        cout << "enter z value" << endl;
        cin >> z;
    }
    void sum(){
        cout << "the sum of three variables is " << x + y + z << endl;
    }
};


int main(){
    der2 d2;
    d2.getxy();
    d2.getz();
    d2.sum();
    der1 d1;
    d1.getxy();
    d1.sum();
    return 0;

}


==========================================================================


//Hybrid Inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    Vehicle()
    {
    cout << "This is a Vehicle" << endl;
    }
};

//base class
class Fare
{
    public:
    Fare()
    {
        cout<<"Fare of Vehicle\n";
    }
};

// first sub class
class Car: public Vehicle
{

};

// second sub class
class Bus: public Vehicle, public Fare
{
    
};

int main()
{
    // creating object of sub class will
    // invoke the constructor of base class
    Bus obj2;
    return 0;
}


=================================================


#include <iostream>
using namespace std;

class base{
public:
    int x;
    base(){
        cout << "i am in base cons" << endl;
    };
};

class der1: public base{

public:
    der1(){
        cout << "the x value is " << x << endl;
        cout << "i am in derived class const" << endl;
    }
};

int main(){
    der1 d;
    return 0;
}


===============================================================


#include <iostream>
using namespace std;

class base{
public:
    int x;
    ~base(){
        cout << "i am in base des" << endl;
    };
};

class der1: public base{

public:
    ~der1(){
        cout << "the x value is " << x << endl;
        cout << "i am in derived class des" << endl;
    }
};

int main(){
    der1 d;
    return 0;
}


===========================================================